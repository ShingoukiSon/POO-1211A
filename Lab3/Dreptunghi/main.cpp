// main.cpp
#include <iostream>
#include "dreptunghi.h"
void raport(const Dreptunghi& d)
{
    std::cout<<"aria "<<d.aria()<<", perimetrul "<<d.perimetru()<<"\n";
    d.deseneaza();
}
int main()
{
Dreptunghi d,c;
d.init(6, 4);
std::cout << "aria " << d.aria() << "\n";
std::cout << "perimetrul "
<< d.perimetru() << "\n";
//d.deseneaza(); // umplere = ' '
Dreptunghi* p = &d;
p->init(5, 3); // prin pointer
//p->deseneaza('#');
// std::cout << d.lungime; // EROARE
// d.linie('*', '*'); // EROARE
/*c.init(6,3);
std::cout<<d.maiMare(c)<<std::endl;
Dreptunghi v[4];
v[0].init(6,4);
v[1].init(3,9);
v[2].init(5,5);
v[3].init(8,2);
int imax=0;
for(int i=0;i<4;i++)
{
    if(v[imax].maiMare(v[i])==false)
    {
        imax=i;
    }
}
std::cout<<std::endl;
v[imax].deseneaza('#');
std::cout<<"sizeof(Dreptunghi):"<<sizeof(Dreptunghi)<<'\n';*/
/*d.init(3,2);
d.roteste().scaleaza(2);
d.deseneaza('#');*/
raport(d);
return 0;
}