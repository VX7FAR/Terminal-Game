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

bool keypressed(char key);

void print_element(std::string str, std::string guess, vector2 at, int xincrement);

bool instring(char tofind, std::string findin);

bool booleaninput(std::string in);