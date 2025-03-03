#include <iostream>
#include <vector>
#include <string>
#include <random>
#include "generatenumbers.h"

bool numberGenerationSuccessful(duo_vector<int> &sudokuBoard) {
    // Verifies if the board was successfully filled with random numbers in correct positions
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            if (sudokuBoard[i][j] == 0) return false;
        }
    }
    return true;
}

void generateBoardNumbers(duo_vector<int> &sudokuBoard, trio_vector<int> &sudokuSquare) {
    std::random_device rd;
    std::mt19937 gen(rd());
    auto getRandomInRange = [&](int min, int max) {
        return std::uniform_int_distribution<int> (min, max)(gen);
    };

    // Set/Reset both 9x9 board and 3x3 squares values if the previous board was a failed generation
    while (!numberGenerationSuccessful(sudokuBoard)) {
        sudokuBoard.assign(9, std::vector<int>(9, 0));
        sudokuSquare.assign(3, duo_vector<int>(3, std::vector<int>(9, 0)));
        bool successfulAttempt = true;

        // Generates random position in a row for a column
        for (int number=1; number<10 && successfulAttempt; number++) {
            int columnSpot, oldSpotNumber, failedAttempts;

            for (int i=0; i<9 && successfulAttempt; i++) {
                columnSpot = getRandomInRange(0, 8);
                oldSpotNumber = sudokuBoard[i][columnSpot];
                sudokuBoard[i][columnSpot] = number;
                failedAttempts = 0; 

                // Verifies if a number is not alone in a column and/or in its 3x3 square
                while (!numberIsValidInBoard(sudokuBoard, sudokuSquare, i, columnSpot, number, oldSpotNumber)) {
                    sudokuBoard[i][columnSpot] = oldSpotNumber;
                    columnSpot = (1 + columnSpot) % 9;
                    oldSpotNumber = sudokuBoard[i][columnSpot];
                    sudokuBoard[i][columnSpot] = number;
                    failedAttempts++;

                    // If the number can't fit at all, it stops trying since it's impossible
                    if (failedAttempts > 9) {
                        sudokuBoard[i][columnSpot] = oldSpotNumber;
                        successfulAttempt = false;
                        break;
                    }
                }
                if (failedAttempts > 9) break;
                sudokuBoard[i][columnSpot] = number;
            }
            if (failedAttempts > 9) break;
        }
    }
}

bool testNumberInColumn(duo_vector<int> &sudokuBoard, int columnSpot, int number) {
    int counter = 0;

    // Verifies if a number is the only of it's kind in a specific column
    for (int i=0; i<9; i++) {
        if (sudokuBoard[i][columnSpot] == number) counter++;
        if (counter > 1) return false;
    }
    return true;
}

bool testNumberInSquare(trio_vector<int> &sudokuSquare, int number, int columnSpot, int rowSpot) {
    duo_vector<int> squareID(3, std::vector<int>(3, 0));
    int tempNumberID = 0;

    // Each nine 3x3 square receives a ID from 0 to 8
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            squareID[i][j] = tempNumberID;
            tempNumberID++;
        }
    }
    // Verifies in wich square the current number is positioned
    int squareRow = rowSpot/3, squareCol = columnSpot/3;
    int square = squareID[squareRow][squareCol];

    // Gets the specific number's row and column in it's 3x3 square
    int row = rowSpot % 3;
    int col = columnSpot % 3;

    int oldSpotNumber = sudokuSquare[row][col][square];
    sudokuSquare[row][col][square] = number;

    // Verifies if a numbers is the only of it's kind in it's 3x3 square
    int counter = 0;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (sudokuSquare[i][j][square] == number) counter++;
            if (counter > 1) {
                sudokuSquare[row][col][square] = oldSpotNumber;
                return false;
            }
        }
    }
    return true;
}

bool numberIsValidInBoard(duo_vector<int> &board, trio_vector<int> &square, int row, int col, int num, int old) {
    return (old == 0 && testNumberInColumn(board, col, num) && testNumberInSquare(square, num, col, row));
}