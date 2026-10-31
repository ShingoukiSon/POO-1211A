// main.cpp
#include <iostream>
#include "Obiect.h"
Obiect g{1};
void f(int id)
{
static Obiect s{id};
Obiect local{id * 10};
std::cout << "f(" << id << ")\n";
}
int main()
{
std::cout << "inceput main\n";
f(2);
f(3);
std::cout << "sfarsit main\n";
return 0;
}