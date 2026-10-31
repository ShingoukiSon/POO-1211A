// Data.h
#ifndef DATA_H
#define DATA_H
// Invariant: 1 <= luna <= 12
// 1 <= zi <= zileInLuna(luna, an)
class Data
{
int zi, luna, an;
public:
Data(int zi, int luna, int an);
Data();
explicit Data(int an);
int getZi() const { return zi; }
int getLuna() const { return luna; }
int getAn() const { return an; }
Data& adaugaZile(int n); // n >= 0
void afiseaza() const;
};
int zileInLuna(int luna, int an);
#endif
