// #include <iostream>
// #include <cstdlib>
// #include <cstring>
// #include <windows.h>
// using namespace std;
// class employee
// {
//     int id, salery;
//     static int shiva;

// public:
//     void setid(void)
//     {
//         salery = 5000;
//         cout << "enter the ID of employee: ";
//         cin >> id;
//         getid();
//     }
//     void getid()
//     {
//         cout << "employe no: " << shiva << "  the ID og the employye: " << id << endl;
//         shiva++;
//     }
// };
// int employee::shiva = 1;
// int main()
// {
//     int n;
//     // employee shiva, harry, ex;
//     // shiva.setid();
//     // harry.setid();
//     // ex.setid();
//     cout << "enter the number of empoyee: ";
//     cin >> n;
//     employee fb[n];
//     for (int i = 0; i < n; i++)
//     {
//         fb[i].setid();
//     }
//     return 0;
// }

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
using namespace std;
class complex
{
    int a, b;

public:
    void setdata(int v, int v1)
    {

        a = v;
        b = v1;
    }
    void setdatasum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void display()
    {
        cout << "you're complex number" << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex shiva, b, c;
    shiva.setdata(1, 2);
    shiva.display();
    b.setdata(3, 4);
    b.display();
    c.setdata(4, 5);
    c.display();

    return 0;
}