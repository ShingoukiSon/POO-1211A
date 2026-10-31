// Data.cpp
#include "Data.h"
#include <format>
#include <iostream>
// funcție ajutătoare, doar în Data.cpp
int zileInLuna(int luna, int an)
{
constexpr int zile[]{31, 28, 31, 30, 31, 30,
31, 31, 30, 31, 30, 31};

return (luna == 2 && bisect(an)) ? 29 : zile[luna - 1];
}
bool Data::init(int zi, int luna, int an)
{
if (luna < 1 || luna > 12 ||
zi < 1 || zi > zileInLuna(luna, an))
return false; // obiect neschimbat
this->zi = zi;
this->luna = luna;
this->an = an;
return true;
}
Data& Data::adaugaZile(int n)
{
for (int i = 0; i < n; i++)
{
zi++;
if (zi > zileInLuna(luna, an))
{
zi = 1;
luna++;
}
if (luna > 12)
{
luna = 1;
an++;
}
}
return *this;
}
void Data::afiseaza() const
{
std::cout << std::format(
"{:02}.{:02}.{}\n", zi, luna, an);
}
bool bisect(int an)
{
    bool bisect = (an % 4 == 0 && an % 100 != 0) || an % 400 == 0;
    return bisect;
}
bool Data::esteBisect() const
{
    if(bisect(an)==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Data::ziuaDinAn() const
{
    if(zi>zileInLuna(luna,an) || zi<1)
    {
        std::cerr<<"Ati introdus o zi care nu exista";
        return 0;
    }
    if(luna<1 || luna>12)
    {
        std::cerr<<"Ati introdus o luna care nu exista";
        return 0;
    }
    int zile=0;
    for (int i=1;i<luna;i++)
    {
        zile+=zileInLuna(i,an);
    }
    zile+=zi;
    return zile;

}
bool Data::inainteDe(const Data& alta)
{
    if(an<alta.an)
    {
        return true;
    }
    if(an>alta.an)
    {
        return false;
    }
    int ziCurenta, ziAlta;
    ziCurenta=ziuaDinAn();
    ziAlta=alta.ziuaDinAn();
    if(ziCurenta<ziAlta)
    {
        return true;
    }
    else
    {
        return false;
    }
}
Data& Data::adaugaLuni(int n)
{
    for (int i = 0; i < n; i++)
    {
        luna++;
    }
    if (luna > 12)
    {
        luna = luna-12;
        an++;
    }
    if(zi>zileInLuna(luna,an))
    {
        zi=zileInLuna(luna,an);
    }
    return *this;
}