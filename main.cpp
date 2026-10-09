#include<iostream>
#include<string>
#include<windows.h>
#include<chrono>
#include<thread>
#include<conio.h>
#include "game.h"
using namespace std;

string guess;
string random = "asdfg";

//Compare individual string -> position cursor -> print with colour
void executeinput(size_t attemp, string input){
    vector2 increment = {4,2};
    vector2 cursorposition = {3,2 * attemp};
    print_element(guess, random, cursorposition, 4);
}

int main(){
    system("cls");
    string con;
    string nav;
    size_t attempt;

    while(true){
        cin>>nav;
        if(nav=="wordle"){
            cout << "\033[H";
            printbg();
            while(guess.length() < 5){
                char c = _getch();
                if(c >= 'a' && c<= 'z'){
                    guess += c;
                    cout<<c;
                }
                else if(c>= 'A' && c<='Z'){
                    guess += c;
                    cout<<c;
                }
                else if(c == '\b' && !guess.empty()){
                    guess.pop_back();
                    cout<<"\b \b";
                }
            }
            cout<<"Entered word is "<<guess<<". Do you want to confirm? [Y/n]";
            cin>>con;
            if(booleaninput(con)){
                executeinput(1,guess);
            }
        }
    }
}