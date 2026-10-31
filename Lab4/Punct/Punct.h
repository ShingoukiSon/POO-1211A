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
    
    explicit Punct(int x=0, int y=0);
};
#endif