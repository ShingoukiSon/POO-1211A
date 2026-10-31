#include "pointeri.h"
#include <cctype>
#include <iostream>
int numara(const char* s, char c)
{
    int nr=0;
    while(*s!='\0')
    {
        if(*s==c)
        {
            nr++;
        }
        s++;
    }
    return nr;
}
void majuscule(char *s)
{
    int i=0;
    while(*(s+i)!='\0')
    {
        if(*(s+i)>='a' && *(s+i)<='z'){
            *(s+i)=std::toupper(*(s+i));
        }
        i++;
    }
    std::cout<<s<<std::endl;
}