#include "Fisier.h"
#include <iostream>
Fisier::Fisier(const char* nume, const char* mod)
: f{std::fopen(nume, mod)} // obține
{
    if(f!=nullptr)
    {    
        std::cout << "deschis " << nume << "\n";
        deschise++;
    }
}
Fisier::~Fisier()
{
if (f != nullptr)
{
std::fclose(f); // eliberează
std::cout << "inchis\n";
deschise--;
}
}
bool Fisier::scrie(const char* text)
{
    if(f!=nullptr)
    {
        std::fputs(text, f);
        return true;
    }
    return false;
}
bool Fisier::citesteLinie(char*linie, int n)
{
    if(std::fgets(linie,n,f)==nullptr)
    {
        return false;
    }
    if(!this->deschis())
    {
        return false;
    }
    return true;

}