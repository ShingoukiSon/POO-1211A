
#include "catalog.h"
#include <fstream>
#include <format>
int main(void)
{
    std::vector<Student> catalog;
    catalog=citesteStudenti("studenti.txt");
    scrieRaport(catalog);
    sorteaza(catalog,Criteriu::Nume);
    scrieRaport(catalog);
    sorteaza(catalog,Criteriu::Nume,true);
    scrieRaport(catalog);
    sorteaza(catalog,Criteriu::Medie);
    scrieRaport(catalog);
    sorteaza(catalog,Criteriu::Medie,true);
    scrieRaport(catalog);
    sorteaza(catalog,Criteriu::LungimeNume);
    scrieRaport(catalog);
    sorteaza(catalog,Criteriu::LungimeNume,true);
    scrieRaport(catalog);
    std::ofstream fout("raport.txt");
    sorteaza(catalog,Criteriu::Medie,true);
    scrieRaport(catalog,fout);
    Student prim;
    prim=celMaiBun(catalog);
    fout<<std::format("Cel mai bun student:{:}\n",prim.nume);
    double medieGeneral=0;
    for(Student s:catalog)
    {
        medieGeneral+=medie(s.note);
    }
    medieGeneral/=catalog.size();
    fout<<std::format("Medie generala: {:.2f}",medieGeneral);
    return 0;
}