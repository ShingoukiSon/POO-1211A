// Cerc.h
#ifndef CERC_H
#define CERC_H
#include "Punct.h"
class Cerc
{
    Punct centru;
    double arie;
    const int raza;
public:
    Cerc(int x, int y, int r);
    void afiseaza() const;
    double calculArie();
};
#endif