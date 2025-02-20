#include <iostream>
#include <conio.h>
#include <windows.h>
#include "gameinterface.h"

void updateTerminal(int x, int y){
    // Update every change made in game.
    COORD coord = {(SHORT)x, (SHORT)y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
} 

void displayBoard(char (&cursorPositionInGame)[9][9], int (&sudokuBoard)[9][9]){
    std::cout << " \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n";
    for(int i=0; i<9; i++){
        if(i+1 % 3 != 0) std::cout << " \xBA ";

        // Print cursor/number in the new position after a player's movement.
        for(int j=0; j<9; j++){
            if(cursorPositionInGame[i][j] != '\0'){
                std::cout <<"\033[92m" << cursorPositionInGame[i][j] << "\033[0m";
            } else {
                if(sudokuBoard[i][j] == 0){
                    std::cout << '\xFA';
                } else {
                    std::cout << sudokuBoard[i][j];
                }
            }

            if((j+1) % 3 != 0) std::cout << ' ';
            if((j+1) % 3 == 0) std::cout << " \xBA ";
        }
        std::cout << '\n';

        if(i == 2 || i == 5){
            std::cout << " \xCC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCE\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCE\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xB9\n";
        }
    }
    std::cout << " \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n";
}

void updateCursorPosition(int playerInput, char (&cursorPositionInGame)[9][9]){
    int newCursorRow, newCursorCol;

    // Verifies where the current/original cursor position stands.
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(cursorPositionInGame[i][j] != '\0'){
                newCursorRow = i;
                newCursorCol = j;
                break;
            }
        }
    }

    // Move the cursor from original position according to player's movement.
    switch(playerInput){
        case 72: // Up Arrow
        case 119: // W
            if(newCursorRow == 0)
            break;

            cursorPositionInGame[newCursorRow - 1][newCursorCol] = cursorPositionInGame[newCursorRow][newCursorCol];
            cursorPositionInGame[newCursorRow][newCursorCol] = '\0';
            break;
        case 80: // Down Arrow
        case 115: // S
            if(newCursorRow == 8)
            break;

            cursorPositionInGame[newCursorRow + 1][newCursorCol] = cursorPositionInGame[newCursorRow][newCursorCol];
            cursorPositionInGame[newCursorRow][newCursorCol] = '\0';
            break;
        case 75: // Left Arrow
        case 97: // A
            if(newCursorCol == 1)
            break;

            if(newCursorCol >= 4 && cursorPositionInGame[newCursorRow][newCursorCol] == '>'){
                cursorPositionInGame[newCursorRow][newCursorCol] = '\0';
                cursorPositionInGame[newCursorRow][newCursorCol - 1] = '>';
                break;
            }
            if(newCursorCol >= 4 && cursorPositionInGame[newCursorRow][newCursorCol] == '<'){
                cursorPositionInGame[newCursorRow][newCursorCol] = '\0';
                cursorPositionInGame[newCursorRow][newCursorCol - 1] = '<';
                break;
            }
            if(newCursorCol == 3 && cursorPositionInGame[newCursorRow][newCursorCol] == '>'){
                cursorPositionInGame[newCursorRow][newCursorCol] = '\0';
                cursorPositionInGame[newCursorRow][newCursorCol + 1] = '<';
                break;
            }
            if(newCursorCol <= 4){
                cursorPositionInGame[newCursorRow][newCursorCol] = '\0';
                cursorPositionInGame[newCursorRow][newCursorCol - 1] = '<';
                break;
            }
            break;
        case 77: // Right Arrow
        case 100: // D
            if(newCursorCol == 7)
            break;

            if(newCursorCol <= 4 && cursorPositionInGame[newCursorRow][newCursorCol] == '<'){
                cursorPositionInGame[newCursorRow][newCursorCol] = '\0';
                cursorPositionInGame[newCursorRow][newCursorCol + 1] = '<';
                break;
            }
            if(newCursorCol <= 4 && cursorPositionInGame[newCursorRow][newCursorCol] == '>'){
                cursorPositionInGame[newCursorRow][newCursorCol] = '\0';
                cursorPositionInGame[newCursorRow][newCursorCol + 1] = '>';
                break;
            }
            if(newCursorCol == 5 && cursorPositionInGame[newCursorRow][newCursorCol] == '<'){
                cursorPositionInGame[newCursorRow][newCursorCol] = '\0';
                cursorPositionInGame[newCursorRow][newCursorCol - 1] = '>';
                break;
            }
            if(newCursorCol >= 4){
                cursorPositionInGame[newCursorRow][newCursorCol] = '\0';
                cursorPositionInGame[newCursorRow][newCursorCol + 1] = '>';
                break;
            }
            break;               
    }
}

void insertNumberInBoard(int playerInput, int (&sudokuBoard)[9][9], char (&cursorPositionInGame)[9][9]){
    // Inserts a number in a specific position in board after player clicked a number from 1 to 9.
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(cursorPositionInGame[i][j] == '>'){
                sudokuBoard[i][j+1] = playerInput - 48;
                break;
            }
            if(cursorPositionInGame[i][j] == '<'){
                sudokuBoard[i][j-1] = playerInput - 48;
                break;
            }
        }
    }
}

void readPlayerMovementInGame(char (&cursorPositionInGame)[9][9], int (&sudokuBoard)[9][9]){
    int playerInput = _getch();

    // Verifies if player's input is a number or not.
    if(playerInput < 49 || playerInput > 57)
    {
        // If player's input is an arrow key.
        if(playerInput == 0 || playerInput == 224)
        {
            int arrowKey = _getch();

            switch(arrowKey){
                case 72:
                case 80:
                case 75:
                case 77:
                    updateCursorPosition(arrowKey, cursorPositionInGame);
                    break;
                default:
                    break;
            } 
        // If player's input is a W/A/S/D key.                 
        } else {
            switch(playerInput){
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
    // If player's input is a number from 1 to 9.
    } else {
        insertNumberInBoard(playerInput, sudokuBoard, cursorPositionInGame);
    }
}