#include<iostream>
#include<thread>
#include<chrono>
#include<windows.h>
#include "input.h"
#include<vector>
#include "game.h"
#include "display.h"
using namespace std;

char buffer[10][50];
vector2 position = {5,5};

void movecursor(size_t x, size_t y){
    cout<<"\033["<<x + 1<< ";" << y + 1<<"H";
}

int main(){
    cout<<"STARTED"<<endl;
    cout<<"\033[?25l";      //Hides cursor
    vector2 position;
    system("cls");
    
    
    while (true)
    {
        this_thread::sleep_for(chrono::milliseconds(50));
        cout << "\033[H";
        
        if(KeyPressed('A')){
            if(!((position.x -1 ) < 2)){
                position.x--;
            }
        }
        if(KeyPressed('D')){
            if((position.x + 1) < 52){
                position.x++;
            }
        }
        if(KeyPressed('S')){
            if(!((position.y + 1) >= 12)){
                position.y++;
            }
        }
        if(KeyPressed('W')){
            if(!((position.y - 1) <= 1)){
                position.y--;
            }
        }

        clearbuffer(buffer);
        printbuffer(buffer);
        cout<<"\033["<<position.y<<";"<<position.x<<"H";
        cout<<"0";
    }
 
    cout<<"\033[?25h";
}