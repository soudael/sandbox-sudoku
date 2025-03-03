#include <vector>
#include <string>

#ifndef STRINGLIBRARY_H
#define STRINGLIBRARY_H

using vector_str = std::vector<std::string>;

vector_str mainMenuContent();
vector_str settingsMenuContent();
vector_str rulesMenuContent();
vector_str creditsMenuContent();

#endif