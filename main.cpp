#include<iostream>
#include<string>
#include<windows.h>
#include<chrono>
#include<thread>
#include<conio.h>
#include "game.h"
using namespace std;

int main(){
    system("cls");
    string guess;
    string con;

    // while(true){
        // cout << "\033[H";
        // printbg();
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

        while(true){}
    
    }
// }