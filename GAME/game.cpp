#include <iostream>
#include <conio.h>
#include <windows.h>
#include "interface.hpp"
#include <ctime>

int main()
{
    srand(time(NULL));

    int matrix[9][9];
    char cursorPosition[9][9];

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            matrix[i][j] = 0;
            cursorPosition[i][j] = '\0';
        }
    }
    cursorPosition[4][4] = '>';

    system("cls");

    while(1)
    {
        updateChanges(0, 0);
        displayMatrix(cursorPosition, matrix);
        readMovement(cursorPosition, matrix);
    }

    return 0;
}