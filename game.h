#pragma once
#include<iostream>
#include<string>
#include<vector>

struct vector2{
    int x=0; int y=0;
};
struct layer{
    std::string text;
    size_t text_size;
};


struct gameobject{
    std::vector<layer> obj;
    vector2 size;
};