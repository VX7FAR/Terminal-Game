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



int main(){
    cout<<"STARTED"<<endl;
    cout<<"\033[?25l";
    vector2 position;
    system("cls");
    
    
    while (true)
    {
        this_thread::sleep_for(chrono::milliseconds(50));
        cout << "\033[H";
        
        clearbuffer(buffer);
        printbuffer(buffer);
    }
 
    cout<<"\033[?25h";


}