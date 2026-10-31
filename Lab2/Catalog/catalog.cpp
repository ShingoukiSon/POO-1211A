#include "catalog.h"
#include <fstream>
#include <utility>
#include <format>
std::vector<Student> citesteStudenti(const std::string& numeFisier)
{
    std::vector<Student> catalog;
    std::ifstream fin(numeFisier);
    if(!fin)
    {
        std::cerr<<"Fisierul nu a putut fi deschis\n";
        return catalog;   
    }
    Student s;
    int nrNote;
    while (fin>>s.nume>>s.grupa>>nrNote)
    {
        s.note.clear();
        for(int i=0;i<nrNote;i++)
        {
            int nota;
            fin>>nota;
            s.note.push_back(nota);
        }
        catalog.push_back(s);
    }
    fin.close();
    return catalog;
    
}
double medie(const std::vector<int>& note)
{
    if(note.empty())
    {
        return 0;
    }
    double m{};
    short int contor{};
    for(int i:note)
    {
        m+=i;
        contor++;
    }
    m=m/contor;
    return m;
}
bool comparatie(Student &a, Student &b, Criteriu criteriu)
{
    switch (criteriu)
    {
    case Criteriu::Nume:
        return a.nume<b.nume;
    case Criteriu::Medie:
        return medie(a.note)<medie(b.note);
    case Criteriu::LungimeNume:
        return a.nume.size()<b.nume.size();
    default:
        return 0;
    }
}
void sorteaza(std::vector<Student>& studenti, Criteriu criteriu,bool descrescator)
{
    int n=studenti.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            bool schimba=false;
            if(!descrescator)
            {
                if(comparatie(studenti[j+1],studenti[j],criteriu))
                {
                    schimba=true;
                }
            }
            else
            {
                if(comparatie(studenti[j],studenti[j+1],criteriu))
                {
                    schimba=true;
                }
            }
            if(schimba)
            {
                std::swap(studenti[j],studenti[j+1]);
            }
        }

    }

}
void scrieRaport(const std::vector<Student>& studenti, std::ostream& out)
{
    int c=1;
    out<<std::format("{:<3} {:<15} {:<5} {:<10} \t{:}\n","Nr.","Nume","Grupa","Note","Media");
    for(Student s:studenti)
    {
        out<<std::format("{:>3d} {:14} {:6} ",c,s.nume,s.grupa);
        for(int nota:s.note)
        {
            out<<std::format("{:d} ",nota);
        }
        out<<std::format("\t{:.2f}\n",medie(s.note));
        c++;
    }
    out<<std::endl;
}
const Student& celMaiBun(const std::vector<Student>& studenti)
{
    double max=0;
    const Student *Prim;
    for(const Student &s:studenti)
    {
        double curent=medie(s.note);
        if(max<curent)
        {
            max=curent;
            Prim=&s;
        }
    }
    return *Prim;
}