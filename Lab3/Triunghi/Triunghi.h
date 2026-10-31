#ifndef TRIUNGHI_H_
#define TRIUNGHI_H_
#include "Punct.h"
class Triunghi
{
    Punct a,b,c;
    // Invariant varurile nu sunt coliniare
    public:
    bool init(Punct a, Punct b, Punct c);
    double aria() const;
    double perimetru() const;
    bool esteDreptunghic() const;
    bool esteIsoscel() const;
    void afiseaza() const;
    Triunghi& translateaza(int dx, int dy);
};
double distanta(Punct a, Punct b);
#endif