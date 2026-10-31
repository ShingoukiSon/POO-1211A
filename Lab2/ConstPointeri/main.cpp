#include <iostream>
#include "pointeri.h"

int main()
{
    
    int x = 1;
    int y = 2;
    const int cx = 3;
    int* p1 = &x;              // (1)
    const int* p2 = &cx;             // (2)
    const int* p3 = &cx;       // (3)
    const int* p4 = &x;        // (4)
    int* const p5 = &x;        // (5)
    int* const p6=NULL;             // (6)
    p3 = &y;                   // (7)
                       // (8)
    *p5 = 5;                   // (9)
                       // (10)
    const int* p7 = p4;              // (11)
    const int* const p8 = p1;  // (12)
    int const* p9 = &y;        // (13)
                       // (14)
    char text[]="Ana are mere";
    majuscule(text);
    majuscule("Ana");
    return 0;
}