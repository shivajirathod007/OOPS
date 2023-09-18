#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
using namespace std;
class complex
{
    int a, b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "enterd number is: " << a << " + " << b << "i" << endl;
    }
    friend complex sumcomplex(complex o1, complex o2); /*here we used the friend function for accesing the the private class member */
};
complex sumcomplex(complex o1, complex o2) /*accesed the private member using the friend function */
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setdata(1, 4);
    c2.setdata(4, 5);
    c1.printnumber();
    c2.printnumber();
    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}
/*
*************properties of friend function******************
1---> not in the scope of class
2---> since it is not in the scope of the class , it can't be called from the object of
that classs.c1.compllex() === invalid
3---> can be invoked without the help of any object
4---> usually contans the object as arguments
5---> can be decleard inside public or private section of the class
6---> it can't the members by thier name  and need object_name.member_name to access any member
*/