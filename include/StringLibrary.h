#ifndef STRINGLIBRARY_H
#define STRINGLIBRARY_H

#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <windows.h>
#include "stringlibrary.h"

using vector_str = std::vector<std::string>;

vector_str mainMenuContent();
vector_str settingsMenuContent();
vector_str rulesMenuContent();
vector_str creditsMenuContent();

#endif