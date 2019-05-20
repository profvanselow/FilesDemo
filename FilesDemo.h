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
void writeLine(char*);
// https://stackoverflow.com/questions/5060137/passing-as-const-and-by-reference-worth-it
void writeLineToFile(char*, char*);
void writeAppend();

#endif //FILESDEMO_FILESDEMO_H
