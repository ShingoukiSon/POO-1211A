// Data.h
#ifndef DATA_H
#define DATA_H
// Invariant: 1 <= luna <= 12
// 1 <= zi <= zileInLuna(luna, an)
class Data
{
int zi, luna, an;
public:
// false dacă data este invalidă
bool init(int zi, int luna, int an);
int getZi() const { return zi; }
int getLuna() const { return luna; }
int getAn() const { return an; }
Data& adaugaZile(int n); // n >= 0
void afiseaza() const;
bool esteBisect() const;
int ziuaDinAn() const;
bool inainteDe(const Data& alta);
Data& adaugaLuni(int n);
};
bool bisect(int an);
int zileInLuna(int luna, int an);
#endif