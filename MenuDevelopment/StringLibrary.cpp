#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <windows.h>
#include "stringlibrary.h"

using vector_string = std::vector<std::string>;

vector_string mainMenu(){
    std::string
    welcome = "WELCOME TO SUDOKU GAME\n",
    start = "\nStart",
    settings = "\nSettings",
    rules = "\nRules",
    credits = "\nCredits",
    exit = "\nExit Game";

    vector_string options = {welcome, start, settings, rules, credits, exit};
    return options;
}

vector_string settingsMenu(){
    std::string
    back = "GO BACK\n",
    theme = "\nChange Theme:",
    notes = "\nEnable Notes:";

    vector_string options = {back, theme, notes};
    return options;
}

vector_string rulesMenu(){
    std::string
    back = "GO BACK\n",
    ruleOne = "\nx",
    ruleTwo = "\ny",
    ruleThree = "\nz";

    std::string singleText = ruleOne + ruleTwo + ruleThree;
    vector_string options = {back, singleText};
    return options;
}

vector_string creditsMenu(){
    std::string
    back = "GO BACK\n",
    creator = "\nCreated by: @soudael",
    tools = "\nDeveloped in C++ programming language.\n",
    libraries = "\nUsed libraries:\niostream, ctime,\nvector, string,\nconio.h and windows.h\n",
    personal_lb = "\nPersonal libraries:\ninterface.h and generate.h\n",
    contact = "\nContact my email: soudaelyn@gmail.com",
    license = "\nVisual Studio Code 2025";

    std::string singleText = creator + tools + libraries + personal_lb + contact + license;
    vector_string options = {back, singleText};
    return options;
}
;