#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
using namespace std;
class c2;
class c1
{
    int value;

public:
    void intsetdata(int a)
    {
        value = a;
    }
    friend void exchange(c1 &, c2 &);
    void display(void)
    {
        cout << value << endl;
    }
};
class c2
{
    int value2;

public:
    void intsetdata(int a)
    {
        value2 = a;
    }
    friend void exchange(c1 &, c2 &);
    void display(void)
    {
        cout << value2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    // int temp = x.value;
    // x.value = y.value2;
    // y.value2 = temp;

    // without using third variable
    // x.value = x.value - y.value2;
    // y.value2 = x.value + y.value2;
    // x.value = y.value2 - x.value;

    // bitwise operator
    x.value = x.value ^ y.value2;
    y.value2 = x.value ^ y.value2;
    x.value = x.value ^ y.value2;
}

}

int main()
{

    int n, m;
    cout << "enter the first number: ";
    cin >> n;
    cout << "enter the second number: ";
    cin >> m;
    c1 oc1;
    oc1.intsetdata(n);
    c2 oc2;
    oc2.intsetdata(m);
    exchange(oc1, oc2);
    cout << "the value become after swaping : ";
    oc1.display();
    cout << "the value become after swaping : ";
    oc2.display();
    return 0;
}
