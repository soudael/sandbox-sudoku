#ifndef SPECIALSELECTIONS_H
#define SPECIALSELECTIONS_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <conio.h>
#include "globalfunctions.h"

template <typename dt>
using duo_vector = std::vector<std::vector<dt>>;

duo_vector<int> hideBoardNumbers();
void displayNotesList(std::vector<int> &listOfNotes);
void readNotesInsertion(std::vector<int> &listOfNotes);

#endif