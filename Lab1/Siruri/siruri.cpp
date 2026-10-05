#include "siruri.h"

int siruri::str_length(const char *s)
{
    int count=0;
    while(*s!='\0')
    {
            count++;
        s++;
    }
    return count;
}
bool siruri::eq_mask( const char *sir, const char *masca)
{
    while(*sir!='\0')
    {
        if(*sir!=*masca && *masca!='?')
        {
            return 0;
        }
        sir++;
        masca++;
    }
    return 1;
}
bool siruri::eqcuv(const char *cuv, const char *tablou[])
{
    int i=0;
    while(tablou[i]!=nullptr)
    {
        if(cuv==tablou[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}
char *siruri::strdel(char *s,int pos,int n)
{
    int i;
    if(*(s+pos)=='\0')
    {
        return s;
    }
    while(n)
    {
        i=pos;
        while(*(s+i)!='\0')
        {
            *(s+i)=*(s+i+1);
            i++;
        }
        n--;
    }
    return s;

}
char *siruri::strins(char *s1, int pos, char *s2)
{
    int i=pos;
    while(*s2!='\0')
    {
        *(s1+i)=*s2;
        i++;
        s2++;
    }
    *(s1+i)='\0';
    return s1;

}