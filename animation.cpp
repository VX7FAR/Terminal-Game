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
    "\033[32mCORRECT GUESS!!!",
    "\033[34mCORRECT GUESS!!!",
    "\033[33mCORRECT GUESS!!!\033[37m",
};

std::vector<std::string> LOGO = {
" \033[42m                                                                                        \033[0m\033[33m",
" \033[42m  \033[0m\033[33m  ________          _______                ______    _____   ____            _____  \033[42m  \033[0m\033[33m",
" \033[42m  \033[0m\033[33m  |      |  |          |     \\          / |      |  |     | |    \\   |      |       \033[42m  \033[0m\033[33m",
" \033[42m  \033[0m\033[33m  |         |          |      \\        /  |      |  |_____| |     \\  |      |___    \033[42m  \033[0m\033[33m",
" \033[42m  \033[0m\033[33m  |         |          |       \\  /\\  /   |      |  |  \\    |     /  |      |       \033[42m  \033[0m\033[33m",
" \033[42m  \033[0m\033[33m  |______|  |____   ___|___     \\/  \\/    |______|  |   \\   |____/   |____  |_____  \033[42m  \033[0m\033[33m",
" \033[42m  \033[0m\033[33m                                                                                    \033[42m  \033[0m\033[33m",
" \033[42m                                                                                        ",
"\n\033[47m                                                                                         \n\033[0m\033[33m"
};