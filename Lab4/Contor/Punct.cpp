// Punct.cpp
#include "Punct.h"
#include <cmath>
Punct::Punct(int x, int y) : x{x}, y{y}
{
total++;
}
Punct::~Punct()
{
total--;
}
/*double distanta(const Punct& a, const Punct& b)
{
int dx = a.x - b.x; // membri privați
int dy = a.y - b.y;
return std::sqrt(dx * dx + dy * dy);
}*/
double Punct::distanta(const Punct &b) const
{
    int dx=this->x-b.x;
    int dy=this->y-b.y;
    return std::sqrt(dx*dx+dy*dy);
}

