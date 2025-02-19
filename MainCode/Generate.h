#ifndef GENERATE_H
#define GENERATE_H

bool completedBoard(int board[9][9]);
void generateBoard(int (&board)[9][9], int (&square)[3][3][9]);
bool testPosition(int board[9][9], int column, int number);
bool testSquare(int (&square)[3][3][9], int number, int column, int line);

#endif