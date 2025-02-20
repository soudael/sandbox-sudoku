#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include <windows.h>
#include <conio.h>
#include "gameinterface.h"
#include "generatenumbers.h"
#include "lobbyrendering.h"
#include "stringlibrary.h"

using vector_string = std::vector<std::string>;

int main(){
    srand(time(NULL));

    int selectedOption = 2 , currentSelectedMenu = 0, currentMenuID = 1;
    vector_string optionsContent = mainMenuContent();
    system("cls");

    // Menu section.
    displayMenuContent(optionsContent, selectedOption, currentMenuID);
    updateMenuContent(optionsContent, currentSelectedMenu, selectedOption, currentMenuID);
    // End code if 'EXIT' is selected.
    if(currentSelectedMenu == 6) return 0;

    char cursorPositionInGame[9][9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cursorPositionInGame[i][j] = '\0';
        }
    }
    cursorPositionInGame[4][4] = '>';
    system("cls");

    // Gameplay section.
    int sudokuBoard[9][9], sudokuSquare[3][3][9];
    generateBoardNumbers(sudokuBoard, sudokuSquare);

    while(true)
    {
        updateTerminal(0, 0);
        displayBoard(cursorPositionInGame, sudokuBoard);
        readPlayerMovementInGame(cursorPositionInGame, sudokuBoard);
    }
    return 0;
}
// g++ -static src\stringlibrary.cpp src\lobbyrendering.cpp src\generatenumbers.cpp src\gameinterface.cpp src\main.cpp -I Include -o sudoku.exe