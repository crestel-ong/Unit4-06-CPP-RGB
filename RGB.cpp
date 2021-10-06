// Copyright (c) Crestel Ong All rights reserved
//
// Created by: Crestel
// Created on: October 2021
// This RGB program in c++

#include <iostream>

int main() {
    // this function prints out all the RGB possible combinations


    for (int counter1 = 0; counter1 < 256; counter1++) {
        for (int counter2 = 0; counter2 < 256; counter2++) {
            for (int counter3 = 0; counter3 < 256; counter3++) {
                std::cout << counter1 << "," << counter2 << "," << counter3
                << std::fixed << std::endl;
            }
        }
    }

    std::cout << "\nDone." << std::endl;
}
