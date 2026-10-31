// main.cpp
#include <iostream>
#include "Punct.h"
int main()
{
    std::cout << Punct::getTotal() << "\n";
    Punct a;
    Punct b{3, 4};
    {
        Punct c{1, 1};
        std::cout << Punct::getTotal() << "\n";
    }
    Punct *v = new Punct[3];
    std::cout << Punct::getTotal() << "\n";
    delete[] v;
    std::cout << Punct::getTotal() << "\n";
    std::cout<<a.distanta(b)<<'\n';

    return 0;
}