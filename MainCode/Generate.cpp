#include <iostream>
#include <ctime>
#include "generate.h"

// tests if board is filled with numbers
bool completedBoard(int board[9][9])
{
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(board[i][j] == 0)
            return false;
        }
    }
    return true;
}

// generates numbers in random positions
void generateBoard(int (&board)[9][9], int (&square)[3][3][9])
{
    // set/reset both matrices values
    while (!completedBoard(board)){
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                board[i][j] = 0;
            }
        }
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                for (int k = 0; k < 9; k++){
                    square[i][j][k] = 0;
                }
            }
        }

        // generates random position in column
        for (int number = 1; number < 10; number++){
            int column, oldValue;
            for (int i = 0; i < 9; i++){
                column = rand() % 9;
                oldValue = board[i][column];
                board[i][column] = number;
                int attempts = 0; 

                // tests if a number is not alone in column and/or in its 3x3 square
                while (oldValue != 0 || !testPosition(board, column, number) || !testSquare(square, number, column, i)){
                    board[i][column] = oldValue;
                    column = (1 + column) % 9;
                    oldValue = board[i][column];
                    board[i][column] = number;
                    attempts++;

                    // if a number can't in any way fit, it stops trying and try the next number
                    if (attempts > 9){
                        board[i][column] = oldValue;
                        break;
                    }
                }
                if (attempts > 9){
                    continue;
                }
                board[i][column] = number;
            }
            std::cout << '\n';    
        }
    }
}

// test if a number is alone in its row and column
bool testPosition(int board[9][9], int column, int number){
    int counter = 0;
    for(int i=0; i<9; i++){
        if(board[i][column] == number)
        counter++;

        if(counter > 1)
        return false;
    }
    return true;
}

// tests if a number is alone in its 3x3 square
bool testSquare(int (&square)[3][3][9], int number, int column, int line){
    int gridValue[3][3], boxId = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            gridValue[i][j] = boxId;
            boxId++;
        }
    }
    int boxRow = line/3, boxCol = column/3;
    int box = gridValue[boxRow][boxCol];

    int row = line % 3;
    int col = column % 3;

    int oldValue = square[row][col][box];
    square[row][col][box] = number;

    int counter = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(square[i][j][box] == number)
            counter++;

            if(counter > 1){
                square[row][col][box] = oldValue;
                return false;
            }
        }
    }
    return true;
}