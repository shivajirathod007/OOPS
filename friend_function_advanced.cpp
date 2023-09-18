#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
using namespace std;
// forward decleration
class complex;
class calculator
{
public:
    int sumrealcomplex(complex, complex);
    int sumCompcomplex(complex, complex);
};
class complex
{
    int a, b;
    // Individually declearing function as friends
    friend int calculator::sumrealcomplex(complex, complex);
    friend int calculator::sumCompcomplex(complex, complex);
    // aliter: declearing the entire calculator class as friend
    // friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumCompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    calculator calc;
    int result = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is: " << result << endl;
    int res = calc.sumCompcomplex(o1, o2);
    cout << "the sum of complex  part of o1 and o2 is: " << res << endl;

    return 0;
}