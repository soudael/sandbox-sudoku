#include <vector>
#include <string>
#include "stringlibrary.h"

#ifndef LOBBYRENDERING_H
#define LOBBYRENDERING_H

using vector_str = std::vector<std::string>;

void clearConsole();
int readPlayerMovementInMenu(vector_str optionsContent, int &selectedOption, int &currentMenuID);
void updateMenuContent(vector_str optionsContent, int &optionSelection, int &selectedOption, int &currentMenuID);
void displayMenuContent(vector_str optionsContent, int &selectedOption, int &currentMenuID);
int updateCursorSelection(vector_str optionsContent, int &selectedOption, int playerInput, int &currentMenuID);

#endif