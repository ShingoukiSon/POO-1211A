#include <format>
#include <iostream>
#include <cmath>
double radical(double x) { return std::sqrt(x);}
double sinus(double x) {return std::sin(x);}
double exponential(double x) {return std::exp(x);}
 

int main(void)
{
    double (*functii[])( double ) = {radical,sinus,exponential};
    std::cout << std::format("{:>3} {:>10} {:>8} {:>10}\n",  "x", "sqrt(x)", "sin(x)", "exp(x)");
    int i=0;
    double x;
    for(x=1;x<=10;x=1+i*0.5, i++)
    {
        std::cout<<std :: format ("{:.2f} {:6.2f} {:10.2f} {:10.2f}\n",x,functii[0](x),functii[1](x),functii[2](x));
    }
    return 0;
}