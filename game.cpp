#include <iostream>
#include <string>
#include <windows.h>
#include "game.h"

std::string bg[] = {
    "+---+---+---+---+---+",
    "|   |   |   |   |   |",
    "+---+---+---+---+---+",
    "|   |   |   |   |   |",
    "+---+---+---+---+---+",
    "|   |   |   |   |   |",
    "+---+---+---+---+---+",
    "|   |   |   |   |   |",
    "+---+---+---+---+---+",
    "|   |   |   |   |   |",
    "+---+---+---+---+---+",
    "|   |   |   |   |   |",
    "+---+---+---+---+---+"};

void printbg()
{
    for (std::string s : bg)
    {
        std::cout << s << std::endl;
    }
}

bool keypressed(char key)
{
    return GetAsyncKeyState(key);
}

void print_element(std::string element, input_type type)
{
    switch (type)
    {
    case incorrect:
        std::cout << "\033[31m" << element[0];
        break;
    case correct:
        std::cout << "\033[32m" << element[0];
        break;
    case wrongposition:
        std::cout << "\033[36m" << element[0];
        break;
    default:
        break;
    }
}

