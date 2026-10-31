#include <iostream>
#include "Senzor.h"
int main()
{
    Senzor s;
    s.init(-40, 125); // domeniul de măsură
    s.adauga(21.5);
    s.adauga(22.25);
    std::cout << s.adauga(130) << " "
              << s.valoriCitite().size()
              << " " << s.esteValid() << "\n";
    /*s.getMin()=33;
    std::cout<<s.getMin()<<' '<<s.esteValid()<<'\n';*/
    /*s.getValori()={10000,12321,31231,231231};
    std::cout<<s.getValori().size()<<' '<<s.esteValid()<<'\n';*/
    /**s.date()=177;
    std::cout<<*s.date()<<' '<<s.esteValid()<<'\n';*/
    return 0;
}