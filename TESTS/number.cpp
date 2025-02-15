#include <iostream>
#include <ctime>

bool testPosition(int matrix[9][9], int position, int number);

int main()
{
    srand(time(NULL));

    int matrix[9][9] = {0};

    for(int a=1; a<10; a++){
        int pos;
        for(int i=0; i<9; i++){
            pos = rand() % 9;
            while(matrix[i][pos] != a && matrix[i][pos] != 0){
                if(pos == 8){
                    pos = 0;
                } else
                if(pos >= 0){
                    pos += 1;
                }
            }
            matrix[i][pos] = a;

            while(!testPosition(matrix, pos, a)){
                matrix[i][pos] = 0;
                pos = (pos + 1 + rand() % (9 - pos)) % 9;
                while(matrix[i][pos] != 0 && !testPosition(matrix, pos, a)){
                    pos = (pos + 1) % 9;
                }
                matrix[i][pos] = a;
            }
        }
    }

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}

bool testPosition(int matrix[9][9], int position, int number)
{
    int counter = 0;

    for(int i=0; i<9; i++){
        if(matrix[i][position] == number){
            counter++;
            if(counter > 1) return false;
        }
    }
    return true;
}