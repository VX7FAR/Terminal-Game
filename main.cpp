#include <iostream>
#include <string>
#include <windows.h>
#include <chrono>
#include <thread>
#include <conio.h>
#include "game.h"
#include "animation.h"
using namespace std;

string guess;
string random = "asdfg";

// Take 5 digit input in terminal
string answer_input()
{
    string input = "";
    while (input.length() < 5)
    {
        char c = _getch();
        if (c >= 'a' && c <= 'z')
        {
            input += c;
            cout << c;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            input += c;
            cout << c;
        }
        else if (c == '\b' && !input.empty())
        {
            input.pop_back();
            cout << "\b \b";
        }
    }
    return input;
}

int main()
{
    system("cls");
    string user_input;
    string answer;
    string nav;
    int attempts = 1;
    bool won = false;

    while (true)
    {
        cout<<"\033[H";
        system("cls");
        cout << "\033[H" << "Go To: ";
        cin >> nav;
        if (nav == "wordle")
        {
            attempts = 1;
            won = false;
            system("cls");
            cout << "\033[H"; // Move cursor to top left
            printbg();
            while (!won && attempts < 7)
            {
                movecursor({1, 14});
                cout << "                                                                                                         ";
                movecursor({1, 14});
                answer = answer_input();
                if (writeintable(answer, "quill", attempts))
                {
                    movecursor({1, 14});
                    std::cout << "                                                       ";
                    playanimation(you_won_anim, 1000, {1, 14});
                    break;
                }
                attempts++;
            }
        }
    }
}