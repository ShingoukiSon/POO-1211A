#include <iostream>
#include "Triunghi.h"
#include <cmath>
#include <format>
bool Triunghi::init(Punct a, Punct b, Punct c)
{
    if((b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x)==0)
    {
        return false;
    }
    this->a=a;
    this->b=b;
    this->c=c;
    return true;
}
double Triunghi::aria() const
{
    double expr;
    expr=abs((b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x));
    double arie;
    arie=expr/2;
    return arie;
}
double Triunghi::perimetru() const
{
    double AB, AC, BC;
    AB=distanta(a,b);
    AC=distanta(a,c);
    BC=distanta(b,c);
    return sqrt(AB)+sqrt(AC)+sqrt(BC);
}
double distanta(Punct a, Punct b)
{
    double x,y;
    x=b.x-a.x;
    x=x*x;
    y=b.y-a.y;
    y=y*y;
    double dis=x+y;
    return dis;
}
bool Triunghi::esteDreptunghic() const
{
    double AB, AC, BC;
    AB=distanta(a,b);
    AC=distanta(a,c);
    BC=distanta(b,c);
    if(AB+BC==AC)
    {
        return true;
    }
    if(AB+AC==BC)
    {
        return true;
    }
    if(AC+BC==AB)
    {
        return true;
    }
    return false;
}
bool Triunghi::esteIsoscel() const
{
    double AB, AC, BC;
    AB=distanta(a,b);
    AC=distanta(a,c);
    BC=distanta(b,c);
    if(AB==AC)
    {
        return true;
    }
    if(AB==BC)
    {
        return true;
    }
    if(AC==BC)
    {
        return true;
    }
    return false;
}
Triunghi& Triunghi::translateaza(int dx, int dy)
{
    this->a.x=this->a.x+dx;
    this->b.x=this->b.x+dx;
    this->c.x=this->c.x+dx;
    this->a.y=this->a.y+dy;
    this->b.y=this->b.y+dy;
    this->c.y=this->c.y+dy;
    return *this;
}
void Triunghi::afiseaza() const
{
    std::cout<<std::format("({:.0f}, {:.0f}) ({:.0f}, {:.0f}) ({:.0f}, {:.0f}), aria {:.2f}, perimetrul {:.2f}\n", a.x, a.y, b.x, b.y, c.x, c.y, aria(), perimetru());
     
}