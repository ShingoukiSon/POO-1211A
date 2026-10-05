#include <fstream>
#include <iostream>
#include <format>
int main(void)
{
    int v[100];
    std::ifstream fin("numere.txt");
    std::ofstream fout("rezulate.txt");

    if(!fin || !fout)
    {
        std::cerr<<"Fisierele nu au putut fi deschise\n";
        return 1;
    }
    int n,i;
    fin>>n;
    if(n<1 || n>100)
    {
        std::cerr<<"n nu este in intervalul dat\n";
        return 1;
    }
    for(i=0;i<n;i++)
    {
        fin>>v[i];
    }
    int sum=0;
    double media;
    for(i=0;i<n;i++)
    {
        sum+=v[i];
    }
    media=(double)sum/n;
    fout<<std::format("{:<6} {:<6}\n{:<6d} {:<6.2f}\n","suma","medie",sum,media);
    fin.close();
    fout.close();
    return 0;
}