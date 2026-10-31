// Obiect.cpp
#include "Obiect.h"
#include <iostream>
Obiect::Obiect(int id) : id{id}
{
std::cout << "constructor " << id << "\n";
}
Obiect::~Obiect()
{
std::cout << "destructor " << id << "\n";
}