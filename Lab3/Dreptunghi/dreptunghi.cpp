// Dreptunghi.cpp
#include "dreptunghi.h"
#include <iostream>
int Dreptunghi::perimetru()
{
return 2 * (lungime + latime);
}
void Dreptunghi::linie(char capat, char mijloc) const
{
std::cout << capat;
for (int i = 0; i < lungime - 2; i++)
std::cout << mijloc;
std::cout << capat << "\n";
}
void Dreptunghi::deseneaza(char umplere) const// fără valoarea implicită
{
linie('+', '-');
for (int i = 0; i < latime - 2; i++)
linie('|', umplere);
linie('+', '-');
}
bool Dreptunghi::maiMare(const Dreptunghi& altul)
{
    if(aria()>(altul.latime*altul.lungime))
    {
        return true;
    }
    else
    {
        return false;
    }
}
Dreptunghi& Dreptunghi::scaleaza(int factor)
{
    lungime*=factor;
    latime*=factor;
    return *this;
}
Dreptunghi& Dreptunghi::roteste()
{
    std::swap(lungime,latime);
    return *this;
}