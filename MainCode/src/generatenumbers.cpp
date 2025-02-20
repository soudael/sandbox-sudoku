#include <iostream>
#include <ctime>
#include "generatenumbers.h"

bool numberGenerationSuccessfull(int sudokuBoard[9][9])
{
    // Verifies if the board was successfully filled with random numbers in correct positions.
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(sudokuBoard[i][j] == 0)
            return false;
        }
    }
    return true;
}

void generateBoardNumbers(int (&sudokuBoard)[9][9], int (&sudokuSquare)[3][3][9])
{
    // Set/Reset both 9x9 board and 3x3 squares values if the previous board was a failed generation.
    while (!numberGenerationSuccessfull(sudokuBoard)){
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                sudokuBoard[i][j] = 0;
            }
        }
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                for (int k = 0; k < 9; k++){
                    sudokuSquare[i][j][k] = 0;
                }
            }
        }

        // Generates random position in a row for a column.
        for (int number = 1; number < 10; number++){
            int columnSpot, oldSpotNumber, failedAttempts;
            for (int i = 0; i < 9; i++){
                columnSpot = rand() % 9;
                oldSpotNumber = sudokuBoard[i][columnSpot];
                sudokuBoard[i][columnSpot] = number;
                failedAttempts = 0; 

                // Verifies if a number is not alone in a column and/or in its 3x3 square.
                while (oldSpotNumber != 0 || !testNumberInColumn(sudokuBoard, columnSpot, number) || !testNumberInSquare(sudokuSquare, number, columnSpot, i)){
                    sudokuBoard[i][columnSpot] = oldSpotNumber;
                    columnSpot = (1 + columnSpot) % 9;
                    oldSpotNumber = sudokuBoard[i][columnSpot];
                    sudokuBoard[i][columnSpot] = number;
                    failedAttempts++;

                    // If the number can't fit at all, it stops trying since it's impossible.
                    if (failedAttempts > 9){
                        sudokuBoard[i][columnSpot] = oldSpotNumber;
                        break;
                    }
                }
                // If a number is skipped, the board becomes a failed generation and proceed to generate another.
                if (failedAttempts > 9) break;
                sudokuBoard[i][columnSpot] = number;
            }
            // Stop trying to generate numbers if the board became a failed generation.
            if (failedAttempts > 9) break;
            std::cout << '\n';    
        }
    }
}

bool testNumberInColumn(int sudokuBoard[9][9], int columnSpot, int number){
    int counter = 0;

    // Verifies if a number is the only of it's kind in a specific column.
    for(int i=0; i<9; i++){
        if(sudokuBoard[i][columnSpot] == number)
        counter++;

        if(counter > 1)
        return false;
    }
    return true;
}

bool testNumberInSquare(int (&sudokuSquare)[3][3][9], int number, int columnSpot, int rowSpot){
    int squareID[3][3], tempNumberID = 0;

    // Each nine 3x3 square receives a ID from 0 to 8.
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            squareID[i][j] = tempNumberID;
            tempNumberID++;
        }
    }
    // Verifies in wich square the current number is positioned.
    int squareRow = rowSpot/3, squareCol = columnSpot/3;
    int square = squareID[squareRow][squareCol];

    // Gets the specific number's row and column in it's 3x3 square.
    int row = rowSpot % 3;
    int col = columnSpot % 3;

    int oldSpotNumber = sudokuSquare[row][col][square];
    sudokuSquare[row][col][square] = number;

    // Verifies if a numbers is the only of it's kind in it's 3x3 square.
    int counter = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(sudokuSquare[i][j][square] == number)
            counter++;

            if(counter > 1){
                sudokuSquare[row][col][square] = oldSpotNumber;
                return false;
            }
        }
    }
    return true;
}