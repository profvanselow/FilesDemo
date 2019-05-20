//
// Created by sdvansel on 5/20/2019.
//

#include <iostream>
#include <string>
#include <fstream>

#include "FilesDemo.h"

void writeLine(char* lineToWrite) {
    std::ofstream myFile;
    myFile.open("example.txt");
    myFile << lineToWrite << "\n";
    //std::cout << "Saved to example.txt\n";
    myFile.close();
}