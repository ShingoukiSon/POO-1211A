// Senzor.h
#ifndef SENZOR_H
#define SENZOR_H
#include <vector>
// Invariant: min < max și fiecare valoare din valori este în intervalul [min, max]
class Senzor
{
double min;
double max;
std::vector<double> valori; // inițial gol (vom vedea de ce în Cursul 4)
public:
bool init(double min, double max);
bool adauga(double v); // false dacă v nu este în [min, max]
const double& getMin() const { return min; } // (1)
double getMax() const { return max; } // (2)
const std::vector<double>& getValori() const { return valori; } // (3)
const std::vector<double>& valoriCitite() const { return valori; } // (4)
const double* date() const { return valori.data(); } // (5)
bool esteValid() const; // verifică invariantul, pentru teste
};
#endif