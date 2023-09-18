#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
using namespace std;
class amb
{
public:
    void greeting()
    {
        cout << "kasa ahes re!!!" << endl;
    }
};
class amb2
{
public:
    void greeting()
    {
        cout << "how you are!!!" << endl;
    }
};
class derived : public amb, public amb2
{
    int a;

public:
};
int main()
{
    amb obj1;
    amb2 obj2;
    obj1.greeting();
    obj2.greeting();

    return 0;
}