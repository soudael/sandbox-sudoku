#ifndef SOURCELIBRARYGROUP_H
#define SOURCELIBRARYGROUP_H

// Standard C/C++ libraries
#include <iostream>
#include <random>
#include <vector>
#include <string>
#include <windows.h>
#include <conio.h>

// Personal C/C++ libraries
#include "gameinterface.h"
#include "generatenumbers.h"
#include "lobbyrendering.h"
#include "stringlibrary.h"

// Templates
template <typename dt>
using duo_vector = std::vector<std::vector<dt>>;
template <typename dt>
using trio_vector = std::vector<duo_vector<dt>>;
using vector_str = std::vector<std::string>;

#endif