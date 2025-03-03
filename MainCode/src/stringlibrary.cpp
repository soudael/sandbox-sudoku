#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <windows.h>
#include "stringlibrary.h"

using vector_str = std::vector<std::string>;
std::string null = "";

vector_str mainMenuContent() {
    std::string
    welcome = "\xFA WELCOME TO SUDOKU GAME \xFA\n",
    start = "Start",
    settings = "Settings",
    rules = "Rules",
    credits = "Credits",
    exit = "Exit Game";

    vector_str options = {null, welcome, start, settings, rules, credits, exit, null};
    return options;
}

vector_str settingsMenuContent() {
    std::string
    back = "GO BACK\n",
    theme = "Change Theme:",
    notes = "Enable Notes:";

    vector_str options = {null, back, theme, notes, null};
    return options;
}

vector_str rulesMenuContent() {
    std::string
    back = "GO BACK",
    ruleTitle = "\n-= CLASSIC SUDOKU RULES =-\n",
    ruleText = "\nFill the 9x9 grid so that:",
    ruleOne = "\n\t\xFA Each 3x3 box have numbers from 1 to 9",
    ruleTwo = "\n\t\xFA Each row have numbers from 1 to 9",
    ruleThree = "\n\t\xFA Each column have numbers from 1 to 9",
    ruleFour = "\n\t\xFA There is no repetition in any 3x3 box, row or column!";

    std::string singleText = ruleTitle + ruleText + ruleOne + ruleTwo + ruleThree + ruleFour;
    vector_str options = {null, back, singleText};
    return options;
}

vector_str creditsMenuContent() {
    std::string
    back = "GO BACK",
    creator = "\nCreated by: @soudael",
    tools = "\nDeveloped in C++ programming language.\n",
    libraries = "\nUsed libraries:\niostream, ctime,\nvector, string,\nconio.h and windows.h\n",
    personal_lb = "\nPersonal libraries:\ninterface.h, generate.h\nand stringlibrary.h\n",
    contact = "\nContact my email: soudaelyn@gmail.com",
    license = "\nVisual Studio Code 2025";

    std::string singleText = creator + tools + libraries + personal_lb + contact + license;
    vector_str options = {null, back, singleText};
    return options;
}