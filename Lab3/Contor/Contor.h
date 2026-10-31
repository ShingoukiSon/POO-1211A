// Contor.h
#ifndef CONTOR_H
#define CONTOR_H
class Contor
{
int valoare;
public:
void init() { valoare = 0; }
Contor& inc() // obiectul curent
{
valoare++;
return *this;
}
Contor incCopie() // o copie
{
valoare++;
return *this;
}
int get() { return valoare; }
};
#endif