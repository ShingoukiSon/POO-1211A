#include <iostream>
#include "siruri.h"
using namespace std;
int main(void)
{
    char s[101];
    cout << "Introduceti sirul: ";
    cin.getline(s, 101);
    cout << "sirul are " << siruri::str_length(s) << " caractere\n";
    cout << "sirul "<<(siruri::eq_mask(s,"?bc?e") ? "corespunde" : "nu corespunde") <<" mastii\n";
    const char *tablou[100] = {"curs1", "curs2", "curs3"}; // restul: nullptr
    const char *cuv1 = "curs2", *cuv2 = "curs5";
    std::cout << "curs2 " << (siruri::eqcuv(cuv1, tablou) ? "este" : "nu este")
              << " in tablou\n";
    std::cout << "curs5 " << (siruri::eqcuv(cuv2, tablou) ? "este" : "nu este")
              << " in tablou\n";
    int pos, n;
    cout<<"positia de stergere:";
    cin>>pos;
    cout<<"numarul de caractere de sters:";
    cin>>n;
    cout<<"sirul sters:"<<siruri::strdel(s,pos,n)<<endl;
    cout<<"positia de inserare:";
    cin>>pos;
    char s2[51];
    cout<<"sirul de inserat:";
    cin.ignore();
    cin.getline(s2,51);
    cout<<"sirul inserat:"<<siruri::strins(s,pos,s2)<<endl;
    return 0;
}