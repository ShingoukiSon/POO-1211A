// main.cpp
#include <iostream>
#include "Fisier.h"
#include <cstring>
bool salveaza(int n)
{
    Fisier jurnal{"jurnal.txt"};
    if (!jurnal.deschis())
        return false;
    jurnal.scrie("inceput\n");
    if (n < 0)
        return false; // ~Fisier() și aici
    jurnal.scrie("gata\n");
    return true;
} // ~Fisier()
void afiseazaJurnal(const char* nume)
{
    Fisier jurnal{nume,"r"};
    if(jurnal.deschis())
    {
        char buffer[20];
        int numarLinie = 1;

        while (jurnal.citesteLinie(buffer, 20)) 
        {
            int len = std::strlen(buffer);
            if (len > 0 && buffer[len - 1] == '\n') 
            {
                buffer[len - 1] = '\0';
            }

            std::cout << numarLinie << ": " << buffer << "\n";
            numarLinie++;

        }
    }
    else
    {
        std::cout<<"nu s-a putut deschide "<<nume<<std::endl;
    }
}
int main()
{
    std::cout << salveaza(5) << "\n";
    afiseazaJurnal("jurnal.txt");
    std::cout << salveaza(-1) << "\n";
    afiseazaJurnal("jurnal.txt");
    afiseazaJurnal("lipsa.txt");
    Fisier gresit{"director_inexistent/jurnal.txt"};
    gresit.scrie("text\n");
    {
        Fisier a{"a.txt"},b{"b.txt"};
        std::cout<<a.getDeschise()<<'\n';
    }
    std::cout<<gresit.getDeschise()<<'\n';
    return 0;
}