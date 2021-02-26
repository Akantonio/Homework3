//
// Created by Adrian Antonio on 2/23/2021.
//

#ifndef HOMEWORK3_TOKENIZER_H
#define HOMEWORK3_TOKENIZER_H

#include<iostream>
#include <vector>
using std::vector;
#include <string>
using std::string;


struct TokenAndPosition{
    string _token;
    int _line;
    unsigned int _column;
};

vector<string> lineToTokens(const string &line);
vector<TokenAndPosition> readLines();
void printTokens(std::ostream &os,const vector<TokenAndPosition>&tokens);

#endif //HOMEWORK3_TOKENIZER_H
