#include <iostream>
using namespace std;
class constractor
{
    int a, b;

public:
    constractor(int, int);
    void printthenum()
    {
        cout << "your ans is: " << a << " + " << b << "i" << endl;
    }
};
constractor::constractor(int x, int y) // -------> this is called parametrized constructor it takes parameters.
{
    a = x;
    b = y;
    cout << "hii this is  a parameterized constructor" << endl;
}
int main()
{
    // Implicit call
    constractor shiba(3, 2);
    // Explict call
    constractor b = constractor(23, 56);
    shiba.printthenum();
    b.printthenum();
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
using namespace std;
class shiva
{
    int a, b, c, d;

public:
    void setdata(int x, int y, int w, int z)
    {
        x = a;
        y = b;
        w = c;
        z = d;
    }
    void print(void)
    {
        int dis = ((a - c) * (a - c) - (b - d) * (b - d)); // when you forgot the formula of findig the distance between points
        cout << "entered number distase is: " << dis;
    }
};
int main()
{
    int a, b, c, d;
    cout << "enter the number : ";
    cin >> a >> b;
    cout << "enter the second term numbers: ";
    cin >> c >> d;
    shiva dis;
    dis.setdata(a, b, c, d);
    dis.print();

    return 0;
}