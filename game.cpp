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

void movecursor(vector2 to){
    std::cout<<"\033[" << to.y <<";"<<to.x<<"H";
}

bool instring(char tofind, std::string findin)
{
    for (int i = 0; i < 5; i++)
    {
        if (tofind == findin[i])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool booleaninput(std::string in)
{
    if (in == "Y")
    {
        return true;
    }
    else
    {
        return false;
    }
}

void writeintable(std::string input, int attempt){
    int increment = 4;
    vector2 position = {3 - increment, 2*attempt};

    for(char &c : input){
        position.x += increment;
        movecursor(position);
        std::cout<<c;
    }
}