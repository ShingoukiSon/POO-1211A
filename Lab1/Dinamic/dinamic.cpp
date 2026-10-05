#include "dinamic.h"
#include <iostream>
#include <format>
int *citesteTablou(int *n)
{
    std::cout<<"numarul de elemente:";
    std::cin>>*n;
    int *a=new int[*n];
    int i;
    for(i=0;i<*n;i++)
    {
        std::cout<<std::format("a[{:d}]=",i);
        std::cin>>*(a+i);
    }
    return a;
}