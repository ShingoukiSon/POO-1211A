#include <iostream>
#include <algorithm>

/*int count = 0;

int main()
{
    count++;
    std::cout << count;
    return 0;
}*/
using namespace std;

int count=0;
int main()
{
    ::count++;
    cout << ::count;
    return 0;
}