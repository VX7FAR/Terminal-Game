#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"game.h"

extern std::vector<std::string> you_won_anim;

extern std::vector<std::string> LOGO;

void playanimation(std::vector<std::string> anim, float delay, vector2 at);