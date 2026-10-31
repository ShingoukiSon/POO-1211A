// main.cpp
#include "Punct.h"
Punct g; // obiect global
void deseneaza(const Punct& p)
{
    p.afiseaza();
}
int main()
{
    Punct p1;   // obiect local
    Punct p2{}; // cu acolade goale
    p1.afiseaza();
    p2.afiseaza();
    g.afiseaza();
    Punct a;
    Punct b{3};
    Punct c{3, 4};
    a.afiseaza();
    b.afiseaza();
    c.afiseaza();
    Punct q{30};
    deseneaza(Punct{7});
    return 0;
}