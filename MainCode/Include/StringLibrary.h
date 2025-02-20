#include <vector>
#include <string>

using vector_string = std::vector<std::string>;

#ifndef STRINGLIBRARY_H
#define STRINGLIBRARY_H

vector_string mainMenuContent();
vector_string settingsMenuContent();
vector_string rulesMenuContent();
vector_string creditsMenuContent();

#endif