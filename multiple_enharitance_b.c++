#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void set_baseint(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_baseint2(int a)
    {
        base2int = a;
    }
};
class Derived : public base1, public base2
{
public:
    void show(void)
    {
        cout << "the value base1 is: " << base1int << endl;
        cout << "the value base2 is: " << base2int << endl;
        cout << "the sum of 2 bases is: " << base1int + base2int;
    }
};
int main()
{
    Derived shiva;
    shiva.set_baseint(25);
    shiva.set_baseint2(26);
    shiva.show();
    return 0;
}