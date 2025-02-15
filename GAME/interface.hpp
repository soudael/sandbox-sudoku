#ifndef INTERFACE_H
#define INTERFACE_H

void updateChanges(int x, int y);
void displayMatrix(char (&cursorPosition)[9][9], int (&matrix)[9][9]);
void changePosition(int playerInput, char (&cursorPosition)[9][9]);
void insertNumber(int playerInput, int (&matrix)[9][9], char (&cursorPosition)[9][9]);
void readMovement(char (&cursorPosition)[9][9], int (&matrix)[9][9]);

#endif