#include <vector>
#include <string>

#ifndef GAMEINTERFACE_H
#define GAMEINTERFACE_H

template <typename dt>
using duo_vector = std::vector<std::vector<dt>>;

void updateTerminal(int x, int y);
void printCharactersLine(char st, char nd, char rd, char df);
void displayBoard(duo_vector<char> &cursorPositionInGame, duo_vector<int> &sudokuBoard);
void movePlayerCursor(duo_vector<char> &cursorPositionInGame, int row, int col, int numberR, int numberC, char symbol);
void updateCursorPosition(int playerInput, duo_vector<char> &cursorPositionInGame);
void insertNumberInBoard(int playerInput, duo_vector<int> &sudokuBoard, duo_vector<char> &cursorPositionInGame);
void readPlayerMovementInGame(duo_vector<char> &cursorPositionInGame, duo_vector<int> &sudokuBoard);

#endif