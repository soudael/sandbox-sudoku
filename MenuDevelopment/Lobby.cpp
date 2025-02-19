#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <windows.h>
#include "stringlibrary.h"

using vector_string = std::vector<std::string>;

void displayMenu(vector_string options, int &cursorPosition);
int readMovement(vector_string options, int &cursorPosition);
int moveCursor(vector_string options, int &cursorPosition, int playerInput);

int main()
{
    int cursorPosition = 2;
    vector_string options = mainMenu();
    displayMenu(options, cursorPosition);
    int optionSelection;

    while(true){
        optionSelection = readMovement(options, cursorPosition);
        switch(optionSelection){
            case 2:
                return 0;
            case 3:
                cursorPosition = 2;
                options = settingsMenu();
                displayMenu(options, cursorPosition);
                break;
            case 4:
                cursorPosition = 2;
                options = rulesMenu();
                displayMenu(options, cursorPosition);
                break;
            case 5:
                cursorPosition = 2;
                options = creditsMenu();
                displayMenu(options, cursorPosition);
                break;
            case 6:
                return 0;
            default:
                continue;
        }
    }
    
    return 0;
}

// Global functions
void displayMenu(vector_string options, int &cursorPosition){
    system("cls");

    int counter = 0;
    for(int i=0; i<cursorPosition; i++){
        std::cout << options[i];
        counter++;
    }

    std::string cursor = "<";
    std::cout << " " << cursor;

    for(int i=counter, j=options.size(); j>counter; i++, j--){
        std::cout << options[i];
    }
}

int readMovement(vector_string options, int &cursorPosition){
    int playerInput = _getch();
    int optionSelection;

    if(playerInput < 49 || playerInput > 57)
    {
        if(playerInput == 0 || playerInput == 224)
        {
            int arrowKey = _getch();
            switch(arrowKey){
                case 72:
                case 80:
                    optionSelection = moveCursor(options, cursorPosition, arrowKey);
                    break;
                default:
                    break;
            }                  
        }else if(playerInput == 13 || playerInput == 32){
            optionSelection = cursorPosition;
        }else{
            switch(playerInput){
                case 119:
                case 115:
                    optionSelection = moveCursor(options, cursorPosition, playerInput);
                    break;
                default:
                    break;
            }
        }
    }
    return optionSelection;
}

int moveCursor(vector_string options, int &cursorPosition, int playerInput){
    switch(playerInput){
        case 72: // seta para cima
        case 119: // W
            cursorPosition -= 1;
            break;
        case 80: // seta para baixo
        case 115: // S
            cursorPosition += 1;
            break;
    }
    if(cursorPosition < 2) cursorPosition += 1;
    if(cursorPosition > int(options.size())) cursorPosition -= 1;

    displayMenu(options, cursorPosition);
    return 0;
}