#include<iostream>
#include<string>
#include<vector>
#include<chrono>
#include<thread>
#include "animation.h"
#include"game.h"

void playanimation(std::vector<std::string> anim, float delay, vector2 at){
    for(std::string s:anim){
        movecursor(at);
        std::cout<<s;
        std::this_thread::sleep_for(std::chrono::milliseconds(int(delay)));
    }
}

std::vector<std::string> you_won_anim={
    "\033[32mYOU WON!",
    "\033[34mYOU WON!",
    "\033[33mYOU WON!\033[37m",
};