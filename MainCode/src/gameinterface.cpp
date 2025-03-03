#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <windows.h>
#include "gameinterface.h"

void updateTerminal(int x, int y) {
    COORD coordinates = {(SHORT)x, (SHORT)y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printCharactersLine(char st, char nd, char rd, char df) {
    auto midsym = [](char df) {return std::string(7, df);};
    std::cout << ' ' << st << midsym(df) << nd << midsym(df) << nd << midsym(df) << rd << '\n';
}

void displayBoard(duo_vector<char> &cursorPositionInGame, duo_vector<int> &sudokuBoard) {
    printCharactersLine('\xC9', '\xCB', '\xBB', '\xCD');
    for (int i=0; i<9; i++) {
        std::cout << " \xBA ";

        // Print cursor/number in the new position after a player's movement
        for (int j=0; j<9; j++) {
            if (cursorPositionInGame[i][j] != ' ') {
                std::cout <<"\033[92m" << cursorPositionInGame[i][j] << "\033[0m";
            } else {
                if (sudokuBoard[i][j] == 0) {
                    std::cout << '\xFA';
                } else {
                    std::cout << sudokuBoard[i][j];
                }
            }

            if ((j+1) % 3 != 0) std::cout << ' ';
            if ((j+1) % 3 == 0) std::cout << " \xBA ";
        }
        std::cout << '\n';

        if (i == 2 || i == 5) printCharactersLine('\xCC', '\xCE', '\xB9', '\xCD');
    }
    printCharactersLine('\xC8', '\xCA', '\xBC', '\xCD');
}

void movePlayerCursor(duo_vector<char> &cursorPositionInGame, int row, int col, int numberR, int numberC, char symbol) {
    cursorPositionInGame[row + (numberR)][col + (numberC)] = numberR == 0 ? symbol : cursorPositionInGame[row][col];
    cursorPositionInGame[row][col] = ' ';
}

void updateCursorPosition(int playerInput, duo_vector<char> &cursorPositionInGame) {
    int newCursorRow, newCursorCol, direct;
    char arrow;

    // Verifies where the current/original cursor position stands
    bool stop = false;
    for (int i=0; i<9 && !stop; i++) {
        for (int j=0; j<9; j++) {
            if (cursorPositionInGame[i][j] != ' ') {
                arrow = cursorPositionInGame[i][j];
                newCursorRow = i;
                newCursorCol = j;
                stop = true;
                break;
            }
        }
    }

    // Move the cursor from original position according to player's movement
    switch (playerInput) {
    case 72: // Up Arrow
    case 119: // W
        if (newCursorRow == 0) break;
        
        movePlayerCursor(cursorPositionInGame, newCursorRow, newCursorCol, -1, 0, arrow);
        break;
    case 80: // Down Arrow
    case 115: // S
        if (newCursorRow == 8) break;

        movePlayerCursor(cursorPositionInGame, newCursorRow, newCursorCol, 1, 0, arrow);
        break;
    case 75: // Left Arrow
    case 97: // A
        if (newCursorCol == 1) break;

        if (cursorPositionInGame[newCursorRow][newCursorCol] == '>' && (newCursorCol >= 4 || newCursorCol == 3)) {
            direct = newCursorCol == 3 ? 1 : -1;
            arrow = newCursorCol == 3 ? '<' : '>';
        }
        else if (newCursorCol <= 4 || (newCursorCol >= 4 && cursorPositionInGame[newCursorRow][newCursorCol] == '<')) {
            direct = -1;
            arrow = '<';
        }
        movePlayerCursor(cursorPositionInGame, newCursorRow, newCursorCol, 0, direct, arrow);
        break;
    case 77: // Right Arrow
    case 100: // D
        if (newCursorCol == 7)
        break;

        if (cursorPositionInGame[newCursorRow][newCursorCol] == '<' && (newCursorCol <= 4 || newCursorCol == 5)) {
            direct = newCursorCol == 5 ? -1 : 1;
            arrow = newCursorCol == 5 ? '>' : '<';
        }
        else if (newCursorCol >= 4 || (newCursorCol <= 4 && cursorPositionInGame[newCursorRow][newCursorCol] == '>')) {
            direct = 1;
            arrow = '>';
        }
        movePlayerCursor(cursorPositionInGame, newCursorRow, newCursorCol, 0, direct, arrow);
        break;               
    }
}

void insertNumberInBoard(int playerInput, duo_vector<int> &sudokuBoard, duo_vector<char> &cursorPositionInGame) {
    // Inserts a number in a specific position in board after player clicked a number from 1 to 9
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            if (cursorPositionInGame[i][j] == '>') {
                sudokuBoard[i][j+1] = playerInput - 48;
                break;
            }
            if (cursorPositionInGame[i][j] == '<') {
                sudokuBoard[i][j-1] = playerInput - 48;
                break;
            }
        }
    }
}

void readPlayerMovementInGame(duo_vector<char> &cursorPositionInGame, duo_vector<int> &sudokuBoard) {
    int playerInput = _getch();

    // Verifies if player's input is a number or not
    if (playerInput < 49 || playerInput > 57) {
        // If player's input is an arrow key
        if (playerInput == 0 || playerInput == 224) {
            int arrowKey = _getch();

            switch (arrowKey) {
                case 72:
                case 80:
                case 75:
                case 77:
                    updateCursorPosition(arrowKey, cursorPositionInGame);
                    break;
                default:
                    break;
            } 
        // If player's input is a W/A/S/D key
        } else {
            switch (playerInput) {
                case 119:
                case 97:
                case 115:
                case 100:
                    updateCursorPosition(playerInput, cursorPositionInGame);
                    break;
                default:
                    break;
            }
        }
    // If player's input is a number from 1 to 9
    } else {
        insertNumberInBoard(playerInput, sudokuBoard, cursorPositionInGame);
    }
}