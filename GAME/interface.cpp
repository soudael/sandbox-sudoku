#include <iostream>
#include <conio.h>
#include <windows.h>
#include "interface.hpp"

void updateChanges(int x, int y)
{
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void displayMatrix(char (&cursorPosition)[9][9], int (&matrix)[9][9])
{
    std::cout << " \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n";
    for(int i=0; i<9; i++){
        if(i+1 % 3 != 0) std::cout << " \xBA ";

        for(int j=0; j<9; j++){
            if(cursorPosition[i][j] != '\0'){
                std::cout << cursorPosition[i][j];
            } else {
                if(matrix[i][j] == 0){
                    std::cout << '\xFA';
                } else {
                    std::cout << matrix[i][j];
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

void changePosition(int playerInput, char (&cursorPosition)[9][9])
{
    int newI, newJ;

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(cursorPosition[i][j] != '\0'){
                newI = i;
                newJ = j;
                break;
            }
        }
    }

    switch(playerInput){
        case 72: // seta para cima
        case 119: // W
            if(newI == 0)
            break;

            cursorPosition[newI - 1][newJ] = cursorPosition[newI][newJ];
            cursorPosition[newI][newJ] = '\0';
            break;
        case 80: // seta para baixo
        case 115: // S
            if(newI == 8)
            break;

            cursorPosition[newI + 1][newJ] = cursorPosition[newI][newJ];
            cursorPosition[newI][newJ] = '\0';
            break;
        case 75: // seta para esquerda
        case 97: // A
            if(newJ == 1)
            break;

            if(newJ >= 4 && cursorPosition[newI][newJ] == '>'){
                cursorPosition[newI][newJ] = '\0';
                cursorPosition[newI][newJ - 1] = '>';
                break;
            }
            if(newJ >= 4 && cursorPosition[newI][newJ] == '<'){
                cursorPosition[newI][newJ] = '\0';
                cursorPosition[newI][newJ - 1] = '<';
                break;
            }
            if(newJ == 3 && cursorPosition[newI][newJ] == '>'){
                cursorPosition[newI][newJ] = '\0';
                cursorPosition[newI][newJ + 1] = '<';
                break;
            }
            if(newJ <= 4){
                cursorPosition[newI][newJ] = '\0';
                cursorPosition[newI][newJ - 1] = '<';
                break;
            }
            break;
        case 77: // seta para direita
        case 100: // D
            if(newJ == 7)
            break;

            if(newJ <= 4 && cursorPosition[newI][newJ] == '<'){
                cursorPosition[newI][newJ] = '\0';
                cursorPosition[newI][newJ + 1] = '<';
                break;
            }
            if(newJ <= 4 && cursorPosition[newI][newJ] == '>'){
                cursorPosition[newI][newJ] = '\0';
                cursorPosition[newI][newJ + 1] = '>';
                break;
            }
            if(newJ == 5 && cursorPosition[newI][newJ] == '<'){
                cursorPosition[newI][newJ] = '\0';
                cursorPosition[newI][newJ - 1] = '>';
                break;
            }
            if(newJ >= 4){
                cursorPosition[newI][newJ] = '\0';
                cursorPosition[newI][newJ + 1] = '>';
                break;
            }
            break;               
    }
}

void insertNumber(int playerInput, int (&matrix)[9][9], char (&cursorPosition)[9][9])
{
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(cursorPosition[i][j] == '>'){
                matrix[i][j+1] = playerInput - 48;
                break;
            }
            if(cursorPosition[i][j] == '<'){
                matrix[i][j-1] = playerInput - 48;
                break;
            }
        }
    }
}

void readMovement(char (&cursorPosition)[9][9], int (&matrix)[9][9])
{
    int playerInput;

    playerInput = _getch();

    if(playerInput < 49 || playerInput > 57)
    {
        if(playerInput == 0 || playerInput == 224)
        {
            int arrowKey = _getch();

            switch(arrowKey){
                case 72:
                case 80:
                case 75:
                case 77:
                    changePosition(arrowKey, cursorPosition);
                    break;
                default:
                    break;
            }                  
        } else {
            switch(playerInput){
                case 119:
                case 97:
                case 115:
                case 100:
                    changePosition(playerInput, cursorPosition);
                    break;
                default:
                    break;
            }
        }
    } else {
        insertNumber(playerInput, matrix, cursorPosition);
    }
}
;