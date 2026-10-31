// main.cpp
#include <iostream>
#include "Data.h"
int main()
{
Data d{28, 2, 2024};
d.adaugaZile(2); // 2024 e bisect
d.afiseaza();
Data e{31, 4, 2026}; // nu există
e.afiseaza();
std::cout << d.getAn() << "\n";
Data a{29, 2, 2024};
Data b(29, 2, 2024);
Data c ={29, 2, 2024};
a.afiseaza();
b.afiseaza();
c.afiseaza();
Data g(29.9, 2, 2024);
g.afiseaza();
return 0;
}