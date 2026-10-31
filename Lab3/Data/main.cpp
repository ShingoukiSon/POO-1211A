// main.cpp
#include <iostream>
#include "Data.h"
int main()
{
/*Data d;
if (!d.init(29, 2, 2023))
std::cout << "29.02.2023 nu exista\n";
d.init(28, 2, 2024);
d.adaugaZile(2); // 2024 e bisect
d.afiseaza();
d.init(31, 12, 2026);
d.adaugaZile(1);
d.afiseaza();
std::cout << d.getAn() << "\n";*/
Data d;
d.init(31, 1, 2024);
std::cout << d.esteBisect() << " " << d.ziuaDinAn() << "\n";
d.adaugaLuni(1); // 31.02.2024 nu există
d.afiseaza();
d.adaugaLuni(12);
d.afiseaza();
Data e;
e.init(31, 12, 2024);
std::cout << e.ziuaDinAn() << " " << d.inainteDe(e) << " "
<< e.inainteDe(d) << " " << d.inainteDe(d) << "\n";
if (!e.init(31, 4, 2026))
e.afiseaza(); // obiect neschimbat
e.adaugaZile(60);
e.adaugaLuni(1);
e.afiseaza();
return 0;
}