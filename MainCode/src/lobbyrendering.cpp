#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <windows.h>
#include "lobbyrendering.h"
#include "stringlibrary.h"
#include "gameinterface.h"

using vector_string = std::vector<std::string>;

#include <windows.h>

void clearConsole(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD cellCount;
    DWORD count;
    COORD homeCoords = {0, 0};

    if (!GetConsoleScreenBufferInfo(hConsole, &csbi))
        return;
    
    cellCount = csbi.dwSize.X * csbi.dwSize.Y;
    FillConsoleOutputCharacter(hConsole, ' ', cellCount, homeCoords, &count);
    FillConsoleOutputAttribute(hConsole, csbi.wAttributes, cellCount, homeCoords, &count);
    SetConsoleCursorPosition(hConsole, homeCoords);
}

void updateMenuContent(vector_string optionsContent, int &currentSelectedMenu, int &selectedOption, int &currentMenuID){
    // Read plyaer's movement while in menu section.
    while(currentSelectedMenu != 2 && currentSelectedMenu != 6){
        currentSelectedMenu = readPlayerMovementInMenu(optionsContent, selectedOption, currentMenuID);

        // If player is not in main menu.
        if(currentMenuID == 0){
            switch(currentSelectedMenu){
                case 1:
                    selectedOption = 2;
                    currentMenuID = 1;
                    optionsContent = mainMenuContent();
                    displayMenuContent(optionsContent, selectedOption, currentMenuID);
                    break;
                case 2:
                    break;
                case 3:
                    selectedOption = 2;
                    optionsContent = settingsMenuContent();
                    displayMenuContent(optionsContent, selectedOption, currentMenuID);
                    break;
                case 4:
                    selectedOption = 1;
                    optionsContent = rulesMenuContent();
                    displayMenuContent(optionsContent, selectedOption, currentMenuID);
                    break;
                case 5:
                    selectedOption = 1;
                    optionsContent = creditsMenuContent();
                    displayMenuContent(optionsContent, selectedOption, currentMenuID);
                    break;
                case 6:
                    break;
                default:
                    continue;
            }
        }
    }
}

void displayMenuContent(vector_string optionsContent, int &selectedOption, int &currentMenuID){
    clearConsole();

    // Display menu optionsContent before selection cursor.
    int counter = 0;
    for(int i=0; i<(selectedOption + currentMenuID); i++){
        std::cout << "\n" << optionsContent[i];
        counter++;
    }

    // Displays selection cursor accordingly to current menu.
    if(currentMenuID == 0){
        std::string cursor = "\033[92m>\033[0m";
        std::cout << "\n" << cursor << " ";
    }else{
        std::string cursor = "\033[92m<\033[0m";
        std::cout << " " << cursor << "\n";
    }

    // Display menu optionsContent after selection cursor.
    for(int i=counter, j=optionsContent.size(); j>counter; i++, j--){
        std::cout << optionsContent[i] << "\n";
    }
}

int readPlayerMovementInMenu(vector_string optionsContent, int &selectedOption, int &currentMenuID){
    int playerInput = _getch();
    int currentSelectedMenu;

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
                    currentSelectedMenu = updateCursorSelection(optionsContent, selectedOption, arrowKey, currentMenuID);
                    break;
                default:
                    break;
            }
        // If player's input is ENTER or SPACEBAR.                      
        }else if(playerInput == 13 || playerInput == 32){
            if(currentMenuID == 1){
                currentSelectedMenu = selectedOption;
                currentMenuID = 0;
            }
            if(currentMenuID == 0 && selectedOption == 1){
                currentSelectedMenu = 1;
            }
        // If player's input is a W/ key.    
        }else{
            switch(playerInput){
                case 119:
                case 115:
                    currentSelectedMenu = updateCursorSelection(optionsContent, selectedOption, playerInput, currentMenuID);
                    break;
                default:
                    break;
            }
        }
    }
    return currentSelectedMenu;
}

int updateCursorSelection(vector_string optionsContent, int &selectedOption, int playerInput, int &currentMenuID){
    switch(playerInput){
        case 72: // Up Arrow
        case 119: // W
            selectedOption -= 1;
            break;
        case 80: // Down Arrow
        case 115: // S
            selectedOption += 1;
            break;
    }
    // Avoid selection cursor from passing the options size limit.
    if(selectedOption == currentMenuID) selectedOption += 1;
    if(selectedOption == int(optionsContent.size()) - 1) selectedOption -= 1;

    displayMenuContent(optionsContent, selectedOption, currentMenuID);
    return 0;
}