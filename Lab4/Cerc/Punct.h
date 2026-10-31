// Punct.h
#ifndef PUNCT_H
#define PUNCT_H
#include <iostream>
class Punct
{
    int x;
    int y;

public:
    void afiseaza() const
    {
        std::cout << "(" << x << ", "
                  << y << ")\n";
    }
    
    Punct(int x, int y);
};
#endif