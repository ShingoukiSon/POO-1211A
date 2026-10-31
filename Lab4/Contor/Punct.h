#ifndef PUNCT_H
#define PUNCT_H
#include <iostream>
class Punct
{
    int x, y;
    static inline int total = 0; // punctele existente
public:
    explicit Punct(int x = 0, int y = 0);
    ~Punct();
    static int getTotal() { return total; }
    //friend double distanta(const Punct &a, const Punct &b);
    double distanta(const Punct &b) const;
    void afiseaza() const
    {
        std::cout << "(" << x << ", "
                  << y << ")\n";
    }
};
double distanta(const Punct &a,
                  const Punct &b);
#endif