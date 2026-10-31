// Data.cpp
#include "Data.h"
#include <format>
#include <iostream>
// funcție ajutătoare, doar în Data.cpp

Data::Data(int zi, int luna, int an)
{
    if (luna < 1 || luna > 12 ||
        zi < 1 || zi > zileInLuna(luna, an))
    {
        // provizoriu: data implicită
        zi = 1;
        luna = 1;
        an = 2000;
    }
    this->zi = zi;
    this->luna = luna;
    this->an = an;
}
int zileInLuna(int luna, int an)
{
    constexpr int zile[]{31, 28, 31, 30, 31, 30,
                         31, 31, 30, 31, 30, 31};
    bool bisect = (an % 4 == 0 && an % 100 != 0) || an % 400 == 0;
    return (luna == 2 && bisect) ? 29 : zile[luna - 1];
}
Data &Data::adaugaZile(int n)
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
Data::Data() : Data{1, 1, 2000}
{
}
Data::Data(int an) : Data{1, 1, an}
{
}