//
// Created by sdvansel on 5/20/2019.
//

// http://www.cplusplus.com/forum/articles/10627/
#ifndef FILESDEMO_FILESDEMO_H
#define FILESDEMO_FILESDEMO_H

#include <string>

void writeToFile();
void readOneLine();
void writeAgain();
void readFile();
void writeLine(std::string&);
// https://stackoverflow.com/questions/5060137/passing-as-const-and-by-reference-worth-it
void writeLineToFile(std::string&, std::string&);
void writeAppend();

#endif //FILESDEMO_FILESDEMO_H
