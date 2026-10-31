// main.cpp
#include <iostream>
#include "Obiect.h"
#include <vector>
    Obiect *creeaza(int id)
{
    Obiect local{id * 10};
    return new Obiect{id};
}
int main()
{
    Obiect a{1};
    Obiect *p = creeaza(2);
    {
        Obiect b{3};
        delete p;
        p = new Obiect{4};
    }
    std::vector<Obiect> w(2);
    delete p;
    std::cout << "sfarsit main\n";
    return 0;
}