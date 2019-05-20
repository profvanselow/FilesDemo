/** @file main.cpp
 *  @brief The whole program (for now).
 *
 *  A demonstration of functions and files.
 *
 *  @author Prof. Vanselow
 *  @bug No known bugs.
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "FilesDemo.h"

// https://www.geeksforgeeks.org/using-namespace-std-considered-bad-practice/

int main() {
    std::cout << "File and Function Demo" << std::endl;
    writeToFile();
    readOneLine();
    writeAgain();
    readFile();
    // https://stackoverflow.com/questions/1524356/c-deprecated-conversion-from-string-constant-to-char/4502036
    writeLine((char *)"Line to write");
    writeLineToFile((char *)"line", (char *)"example.txt");
    writeAppend();
    return 0;
}

void writeToFile() {
    // http://www.cplusplus.com/doc/oldtutorial/files/
    std::ofstream myFile;
    myFile.open("example.txt");
    myFile << "writeToFile called. Writing this to example.txt" << "\n";
    //std::cout << "Saved to example.txt\n";
    myFile.close();
}

void writeAgain() {
    std::ofstream myFile;
    myFile.open("example.txt");
    myFile << "writeAgain called. Writing this to example.txt" << "\n";
    //std::cout << "Saved to example.txt\n";
    myFile.close();
}

void readOneLine() {
    std::string line;
    std::ifstream myFile("example.txt");
    if (myFile.is_open()) {
        getline(myFile, line);
        std::cout << line;
        myFile.close();
    } else std::cout << "Unable to open file";
}

void readFile() {
    std::string line;
    std::ifstream myFile("example.txt");
    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            std::cout << line << std::endl;
        }
        myFile.close();
    } else std::cout << "Unable to open file";
}



void writeLineToFile(char* lineToWrite, char* fileName) {
    std::ofstream myFile;
    myFile.open(fileName);
    myFile << lineToWrite << "\n";
    //cout << "Saved to " << fileName << "\n";
    myFile.close();
}

void writeAppend() {
    std::ofstream myFile;
    myFile.open("example.txt", std::ios_base::app);
    myFile << "writeAppend called. Writing this to example.txt" << "\n";
    //cout << "Saved to " << fileName << "\n";
    myFile.close();
}

