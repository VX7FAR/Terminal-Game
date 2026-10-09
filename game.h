#pragma once
#include<iostream>
#include<string>

extern std::string bg[];

enum result{
    incorrect, correct, wrongposition
};

struct vector2{
    int x;
    int y;
};

void printbg();

bool findinstring(char c, std::string str);

void movecursor(vector2 to);

bool keypressed(char key);

bool booleaninput(std::string in);

bool writeintable(std::string input, std::string word, int attempt);