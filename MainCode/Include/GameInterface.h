#ifndef GAMEINTERFACE_H
#define GAMEINTERFACE_H

void updateTerminal(int x, int y);
void displayBoard(char (&cursorPosition)[9][9], int (&matrix)[9][9]);
void updateCursorPosition(int playerInput, char (&cursorPosition)[9][9]);
void insertNumberInBoard(int playerInput, int (&matrix)[9][9], char (&cursorPosition)[9][9]);
void readPlayerMovementInGame(char (&cursorPosition)[9][9], int (&matrix)[9][9]);

#endif