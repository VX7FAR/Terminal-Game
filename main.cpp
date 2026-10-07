#include<iostream>
#include<thread>
#include<chrono>
#include<windows.h>
#include "input.h"
using namespace std;

int main(){
    cout<<"STARTED"<<endl;
    int position = 0;
    cout<<"\033[?25l";

    while (true)
    {
        // this_thread::sleep_for(chrono::milliseconds(50));
        cout << "\033[H";

        if(KeyPressed('D')){
            // if(true ){
                position++;
            // }
        }
        if(KeyPressed('A')){
            position--;
        }

        for(int i=0; i < position; i++){
            cout<<' ';
        }
        cout<<'0';
    }
 
    cout<<"\033[?25h";
}