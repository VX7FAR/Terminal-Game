#include<iostream>
#include<windows.h>
#include "input.h"

bool KeyPressed(char key){
    if(GetAsyncKeyState(key) & 0x8000){
        return true;
    }
    else return false;
}