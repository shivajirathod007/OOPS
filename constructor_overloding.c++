#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
using namespace std;
class shiva
{
    int a, b;

public:
    shiva(int x, int y)
    {
        a = x;
        b = y;
    }
    shiva(int z)
    {
        a = z;
        b = 0;
    }
    void printer()
    {
        cout << "your ans is: " << a << " + " << b << "i" << endl;
    }
};
/*
  here we can see there two contructors
  and it access constructor as what we give the input
*/

int main()
{
    shiva shiba(12, 6);
    shiba.printer();
    shiva knds(12);
    knds.printer();
    return 0;
}