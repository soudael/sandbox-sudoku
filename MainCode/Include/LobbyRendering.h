#include <vector>
#include <string>
#include "stringlibrary.h"

using vector_string = std::vector<std::string>;

#ifndef LOBBYRENDERING_H
#define LOBBYRENDERING_H

void updateMenuContent(vector_string optionsContent, int &optionSelection, int &selectedOption, int &currentMenuID);
void displayMenuContent(vector_string optionsContent, int &selectedOption, int &currentMenuID);
int readPlayerMovementInMenu(vector_string optionsContent, int &selectedOption, int &currentMenuID);
int updateCursorSelection(vector_string optionsContent, int &selectedOption, int playerInput, int &currentMenuID);

#endif