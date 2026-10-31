#ifndef CATALOG_H_
#define CATALOG_H_
#include <string>
#include <vector>
#include <iostream>
struct Student
{
    std::string nume;
    int grupa;
    std::vector<int> note;
};
std::vector<Student> citesteStudenti(const std::string& numeFisier);
double medie(const std::vector<int>& note);
enum class Criteriu {Nume,Medie,LungimeNume};
void sorteaza(std::vector<Student>& studenti, Criteriu criteriu,bool descrescator=false);
bool comparatie(Student &a, Student &b, Criteriu criteriu);
void scrieRaport(const std::vector<Student>& studenti, std::ostream& out=std::cout);
const Student& celMaiBun(const std::vector<Student>& studenti);
#endif