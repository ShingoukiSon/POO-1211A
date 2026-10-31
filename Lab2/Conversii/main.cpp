#include <cstdint>
#include <iostream>

int main()
{
    int a=0;                   // (1)
    int b=0;                 // (2)
    double medie = 9.75;
    int n1 =static_cast<int>(medie);          // (3)
    int n2=static_cast<int>(medie);           // (4)
    //int n3{9.75};         // (5)
    auto x = 7 / 2;          // (6)
    auto y = 7 / 2.0f;       // (7)
    auto z = (int)(10u - 20);       // (8)
    int mare = 300;
    std::uint8_t s = static_cast<uint8_t>(mare);   // (9)
    unsigned int u = 1;
    int i = -1;
    std::cout << a << " " << b << " " << n1 << " " << n2 << " " << x << " " << y << " "
              << z << " " << +s << " " << (i < (int)u) << "\n";     // (10)
    return 0;
}