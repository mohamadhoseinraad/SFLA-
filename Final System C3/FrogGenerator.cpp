#pragma once
#include "FrogGenerator.h"
#include <cstdlib>
#include <ctime>

void FrogGenerator::generate_frogs() {
    srand(time(0)); // Initialize random seed

    for (int i = 0; i < NUMBER_OF_FROGS; i++) {
        Frog curFrog;
        for (int j = 0; j < NUMBER_OF_ITEMS; ++j) {
            curFrog.solution[j] = rand() % 2; // Generate random bit
        }
        curFrog.allfrogs_index = i;
        frog_out.write(curFrog); // Send frog through FIFO
    }
}
