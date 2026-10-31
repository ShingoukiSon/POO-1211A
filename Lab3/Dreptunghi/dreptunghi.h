// Dreptunghi.h
#ifndef DREPTUNGHI_H
#define DREPTUNGHI_H
class Dreptunghi
{
int lungime;
int latime;
// privată: o folosește doar deseneaza
void linie(char capat, char mijloc) const;
public:
void init(int lungime, int latime)
{
this->lungime = lungime;
this->latime = latime;
}
int aria() const { return lungime * latime; }; 
int perimetru() const;
void deseneaza(char umplere = ' ') const;
bool maiMare(const Dreptunghi& altul);
Dreptunghi& scaleaza(int factor);
Dreptunghi& roteste();
};
#endif