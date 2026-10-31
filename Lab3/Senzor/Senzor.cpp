// Senzor.cpp
#include "Senzor.h"
bool Senzor::init(double min, double max)
{
    if (min >= max)
        return false;
    this->min = min;
    this->max = max;
    valori.clear();
    return true;
}
bool Senzor::adauga(double v)
{
    if (v < min || v > max)
        return false;
    valori.push_back(v);
    return true;
}
bool Senzor::esteValid() const
{
    if (min >= max)
        return false;
    for (double v : valori)
        if (v < min || v > max)
            return false;
    return true;
}