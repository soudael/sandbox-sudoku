#include "globalfunctions.h"

int getRandomInRange(int min, int max) { 
    static std::random_device rd;
    static std::mt19937_64 gen(rd());  
    std::uniform_int_distribution<int> dist(min, max);
    return dist(gen);
}