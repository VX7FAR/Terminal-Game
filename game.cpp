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

// void print_element(std::string str, std::string guess, vector2 at, int xincrement)
// {   at.x -= xincrement;
//     input_type type;
//     for (int i = 0; i < 5; i++)
//     {
//         at.x += xincrement;
//         if (str[i] == guess[i])
//         {
//             type = correct;
//         }
//         else
//         {
//             if (instring(str[i], guess))
//             {
//                 type = wrongposition;
//             }
//             else
//             {
//                 type = incorrect;
//             }
//         }
//         std::cout << "\033[" << at.y << ";" << at.x << "H";
//         switch (type)
//         {
//         case incorrect:
//             std::cout << "\033[31m" << str[i]; // Red
//             break;
//         case correct:
//             std::cout << "\033[32m" << str[i]; // Green
//             break;
//         case wrongposition:
//             std::cout << "\033[36m" << str[i]; // Cyan
//             break;
//         default:
//             break;
//         }
//     }
// }



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