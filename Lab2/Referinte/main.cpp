#include <iostream>

int main(void)
{
    int a=1;
    int b=2;
    int &r=a;
    int *p=&b;
    r=b;
    *p=5;
    p=&r;
    *p +=10;
    int &s=*p;
    s++;
    std::cout<< a<<" "<<b<<" "<<r<<" "<<s<<" "<<s<<"\n";
}