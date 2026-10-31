// main.cpp
#include <iostream>
#include "Contor.h"
int main()
{
Contor a;
Contor b;
a.init();
b.init();
a.inc().inc();
b.incCopie().incCopie();
std::cout << a.get() << " "
<< b.get() << "\n";
return 0;
}