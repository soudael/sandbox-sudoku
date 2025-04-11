#include "specialselections.h"

duo_vector<int> hideBoardNumbers() {
    duo_vector<int> tempVector(9, std::vector<int>(9));
    int counter = 1;
    for (auto& i : tempVector) {
        for (auto& j : i) {
            j = counter;
            counter++;
        }
    }
    int randRow, randCol;
    std::vector<int> listOfSpots;
    duo_vector<int> hiddenSpots(9, std::vector<int>(9, 1));
    while (listOfSpots.size() < 41) {
        do {
            randRow = getRandomInRange(0, 8);
            randCol = getRandomInRange(0, 8);
        } while (std::find(listOfSpots.begin(), listOfSpots.end(), tempVector[randRow][randCol]) != listOfSpots.end());
        listOfSpots.push_back(tempVector[randRow][randCol]);
        hiddenSpots[randRow][randCol] = 0;
    }
    return hiddenSpots;
}

void displayNotesList(std::vector<int> &listOfNotes) {
    std::cout << "Notes -> [ ";
    for (int i=0; i<(listOfNotes.size()-(listOfNotes.size() > 1)); i++) {
            std::cout << i;
            std::cout << ", ";
    }
    std::cout << " ]" << std::endl;
}

void readNotesInsertion(std::vector<int> &listOfNotes) {
    int playerInput = _getch();

    if (playerInput > 48 && playerInput < 58) {
        listOfNotes.push_back(playerInput - 48);
    }
}