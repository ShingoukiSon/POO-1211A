#include "dinamic.h"
#include <iostream>

int main(void)
{
    int *v, n;
    v=citesteTablou(&n);
    while(n)
    {
        std::cout<<*(v+n-1)<<" ";
        n--;
    }
    delete v;
}