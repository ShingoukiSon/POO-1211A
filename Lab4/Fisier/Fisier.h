// Fisier.h
#ifndef FISIER_H
#define FISIER_H
#include <cstdio>
class Fisier
{
std::FILE* f;
static inline int deschise = 0;
public:
explicit Fisier(const char* nume, const char* mod = "w");
~Fisier();
bool deschis() const { return f != nullptr; }
bool scrie(const char* text);
bool citesteLinie(char*linie, int n);
static int getDeschise() {return deschise;}
};
#endif