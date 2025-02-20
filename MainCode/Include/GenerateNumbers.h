#ifndef GENERATENUMBERS_H
#define GENERATENUMBERS_H

bool numberGenerationSuccessfull(int sudokuBoard[9][9]);
void generateBoardNumbers(int (&sudokuBoard)[9][9], int (&sudokuSquare)[3][3][9]);
bool testNumberInColumn(int sudokuBoard[9][9], int columnSpot, int number);
bool testNumberInSquare(int (&sudokuSquare)[3][3][9], int number, int columnSpot, int rowSpot);

#endif