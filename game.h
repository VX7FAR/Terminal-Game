#pragma once
#include<iostream>
#include<string>

extern std::string bg[];

enum input_type{
    incorrect, correct, wrongposition
};

struct vector2{
    int x;
    int y;
};

void printbg();

void movecursor(vector2 to);

bool keypressed(char key);

bool instring(char tofind, std::string findin);

bool booleaninput(std::string in);

void writeintable(std::string input, int attempt);