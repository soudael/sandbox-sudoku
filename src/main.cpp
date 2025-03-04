#include "sourcelibrarygroup.h"

int main() {
    SetConsoleOutputCP(850);
    SetConsoleCP(850);

    int selectedOption = 2, currentSelectedMenu = 0, currentMenuID = 1;
    vector_str optionsContent = mainMenuContent();

    // Menu section
    displayMenuContent(optionsContent, selectedOption, currentMenuID);
    updateMenuContent(optionsContent, currentSelectedMenu, selectedOption, currentMenuID);

    if(currentSelectedMenu == 6) return 0;
    system("cls");

    // Gameplay section
    duo_vector<char> cursorPositionInGame(9, std::vector<char>(9, ' '));
    cursorPositionInGame[4][4] = '>';

    duo_vector<int> sudokuBoard(9, std::vector<int>(9, 0));
    trio_vector<int> sudokuSquare(3, duo_vector<int>(3, std::vector<int>(9, 0)));

    generateBoardNumbers(sudokuBoard, sudokuSquare);
    system("cls");

    while (true) {
        updateTerminal(0, 0);
        displayBoard(cursorPositionInGame, sudokuBoard);
        readPlayerMovementInGame(cursorPositionInGame, sudokuBoard);
    }
    return 0;
}