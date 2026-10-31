// main.cpp
#include <iostream>
class Mesaj
{
public:
explicit Mesaj(const char* text)
{
std::cout << text << "\n";
}
};
class Test
{
Mesaj a{"a implicit"};
Mesaj b;
public:
Test() : Test{"b din Test()"}
{
std::cout << "corp Test()\n";
}
explicit Test(const char* text) : b{text}
{
std::cout << "corp Test(text)\n";
}
};
int main()
{
Test t1;
Test t2{"b direct"};
return 0;
}