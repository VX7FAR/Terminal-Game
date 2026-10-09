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

//Take 5 digit input in terminal
string answer_input(){
    string input = "";
    while(input.length() < 5){
        char c = _getch();
        if(c >= 'a' && c<= 'z'){
            input += c;
            cout<<c;
        }
        else if(c>= 'A' && c<='Z'){
            input += c;
            cout<<c;
        }
        else if(c == '\b' && !input.empty()){
            input.pop_back();
            cout<<"\b \b";
        }
    }
    return input;
}

int main(){
    system("cls");
    string user_input;
    string answer;
    string nav;

    while(true){
        cin>>nav;
        if(nav=="wordle"){
            system("cls");
            cout << "\033[H";           //Move cursor to top left 
            printbg();
            answer = answer_input();
            writeintable(answer,1);
        }
    }
}