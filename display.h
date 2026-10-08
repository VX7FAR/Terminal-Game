#include <iostream>
#include <string>

void repeat(char c, size_t s)
{
    std::string str;
    for (int i = 0; i < s; i++)
    {
        str += c;
    }
    std::cout << str;
}

void clearbuffer(char (&buffer)[10][50])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            buffer[i][j] = ' ';
        }
    }
}

void printbuffer(char (&buffer)[10][50])
{
    std::cout << "|";
    repeat('-', 50);
    std::cout << "|" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "|";
        for (int j = 0; j < 50; j++)
        {
            std::cout << buffer[i][j];
        }
        std::cout << "|" << std::endl;
    }
    std::cout << "|";
    repeat('-', 50);
    std::cout << "|" << std::endl;
}