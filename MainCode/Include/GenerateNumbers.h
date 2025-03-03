#include <vector>
#include <string>

#ifndef GENERATENUMBERS_H
#define GENERATENUMBERS_H

template <typename dt>
using duo_vector = std::vector<std::vector<dt>>;
template <typename dt>
using trio_vector = std::vector<duo_vector<dt>>;

bool numberGenerationSuccessful(duo_vector<int> &sudokuBoard);
void generateBoardNumbers(duo_vector<int> &sudokuBoard, trio_vector<int> &sudokuSquare);
bool testNumberInColumn(duo_vector<int> &sudokuBoard, int columnSpot, int number);
bool testNumberInSquare(trio_vector<int> &sudokuSquare, int number, int columnSpot, int rowSpot);
bool numberIsValidInBoard(duo_vector<int> &board, trio_vector<int> &square, int row, int col, int num, int old);

#endif