#include <iostream>
#include <fstream>
#include "Triunghi.h"
#include <vector>

int main(void)
{
    std::ifstream f("Puncte.txt");
    std::vector<Punct> puncte;
    double x,y;
    int n=0;
    while(f>>x>>y)
    {
        puncte.emplace_back(x,y);
        n++;
    }
    f.close();
    Triunghi tr,trmax;
    int i,j,k;
    int triunghiuri=0,dreptughice=0,isoscele=0;
    trmax.init(puncte[0],puncte[1],puncte[2]);
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(tr.init(puncte[i],puncte[j],puncte[k]))
                {
                    triunghiuri++;
                    if(tr.esteDreptunghic())
                    {
                        dreptughice++;
                    }
                    if(tr.esteIsoscel())
                    {
                        isoscele++;
                    }   
                    if(tr.aria()>trmax.aria())
                    {
                        trmax.init(puncte[i],puncte[j],puncte[k]);
                    }
                }
            }
        }
    }
    std::cout<<n<<" puncte, "<<triunghiuri<< " triunghiuri, "<<dreptughice<<" dreptunghice, "<<isoscele<<" isoscele\n"
             <<"Aria maxima: ";
    trmax.afiseaza();
    trmax.translateaza(1,-1);
    std::cout<<"Translatat:  ";
    trmax.afiseaza();

}