#ifndef GAMEINTERFACE_H
#define GAMEINTERFACE_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>
#include <windows.h>
#include "specialselections.h"

template <typename dt>
using duo_vector = std::vector<std::vector<dt>>;

void updateTerminal(int x, int y);
void printCharactersLine(char st, char nd, char rd, char df);
void displayBoard(duo_vector<char> &cursorPositionInGame, duo_vector<int> &sudokuBoard, duo_vector<int> &hiddenSpots,
                  std::vector<int> &errorList, int &status, std::vector<int> &listOfNotes, int &noteIsOpen);
void movePlayerCursor(duo_vector<char> &cursorPositionInGame, int row, int col, int numberR, int numberC, char symbol);
void updateCursorPosition(int playerInput, duo_vector<char> &cursorPositionInGame);
void insertNumberInBoard(int playerInput, duo_vector<int> &sudokuBoard, duo_vector<char> &cursorPositionInGame);
void readPlayerMovementInGame(duo_vector<char> &cursorPositionInGame, duo_vector<int> &sudokuBoard, int &noteIsOpen,
                              std::vector<int> &listOfNotes);
void readAndDisplay(duo_vector<char> &cursorPositionInGame, duo_vector<int> &sudokuBoard, duo_vector<int> &hiddenSpots,
                    std::vector<int> &errorList, int &status, std::vector<int> &listOfNotes, int &noteIsOpen);

#endif