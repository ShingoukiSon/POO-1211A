// Cerc.cpp
#include "Cerc.h"
#include <iostream>
Cerc::Cerc(int x, int y, int r)
: centru{x, y}, raza{r}
{
    arie=calculArie();
}
void Cerc::afiseaza() const
{
centru.afiseaza();
std::cout << "raza " << raza << ", aria "
<< arie << "\n";
}
double Cerc::calculArie()
{
    double aria;
    aria=3.14159 * raza * raza;
    return aria;
}