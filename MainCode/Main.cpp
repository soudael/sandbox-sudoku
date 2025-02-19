#include <iostream>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include "interface.h"
#include "generate.h"

int main(){
    srand(time(NULL));

    int board[9][9];
    int square[3][3][9];
    char cursorPosition[9][9];

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cursorPosition[i][j] = '\0';
        }
    }
    cursorPosition[4][4] = '>';

    system("cls");
    generateBoard(board, square);
    while(1)
    {
        updateChanges(0, 0);
        displayMatrix(cursorPosition, board);
        readMovement(cursorPosition, board);
    }

    return 0;
}