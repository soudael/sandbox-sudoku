#include <iostream>
#include <ctime>

bool testPosition(int matrix[9][9], int position, int index);
bool testSquare(int (&square)[3][3][9], int index, int position, int i);

int main()
{
    srand(time(NULL));

    int matrix[9][9] = {0};
    int square[3][3][9] = {0};

    for(int index=1; index<10; index++){
        int position, tempValue;
        for(int i=0; i<9; i++){
            position = rand() % 9;
            tempValue = matrix[i][position];
            matrix[i][position] = index;
            int attempts = 0; 

            while(tempValue != 0 || !testPosition(matrix, position, index) || !testSquare(square, index, position, i)){
                matrix[i][position] = tempValue;
                position = (1 + position) % 9;
                tempValue = matrix[i][position];
                matrix[i][position] = index;

                attempts++;
                std::cout << "Tentando gerar...\n";
                if(attempts > 18){
                    matrix[i][position] = tempValue;
                    break;
                }
            }
            if(attempts > 18){
                std::cout << "\nNao conseguiu gerar o valor " << index << ".\n";
                std::cout << "Na linha: " << i+1 << ".\n\n";
                continue;
            }
            matrix[i][position] = index;
            std::cout << "Gerou com sucesso!\n\n";
        }
        std::cout << "Completou " << index << " com sucesso!\n\n";

        for(int j=0; j<9; j++){
            for(int k=0; k<9; k++){
                std::cout << matrix[j][k] << ' ';
            }
            std::cout << '\n'; 
        }
        std::cout << '\n';    
    }

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n'; 
    }

    return 0;
}

bool testPosition(int matrix[9][9], int position, int index)
{
    int counter = 0;
    for(int i=0; i<9; i++){
        if(matrix[i][position] == index)
        counter++;

        if(counter > 1)
        return false;
    }
    return true;
}

bool testSquare(int (&square)[3][3][9], int index, int position, int i)
{
    int tempMatrix[3][3], number = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            number++;
            tempMatrix[i][j] = number;
        }
    }
    int boxRow = i/3, boxCol = position/3;
    int box = tempMatrix[boxRow][boxCol];

    int row = i % 3;
    int col = position % 3;
    square[row][col][box] = index;

    int counter = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(square[i][j][box] == index)
            counter++;

            if(counter > 1)
            return false;
        }
    }
    return true;
}