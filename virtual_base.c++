#include <iostream>
// #include<cstdlib>
// #include <cstring>
// #include <windows.h>
using namespace std;
class master
{
public:
    char name[10];
    int code;
};
class account : virtual public master
{
public:
    int base_salery;
};
class admin : virtual public master
{
public:
    int experince;
};
class employee : public account, public admin
{
    int gross_salery;
    int hra, da;

public:
    void accept()
    {
        cout << "enter the details(name,code): ";
        cin >> name >> code;
        cout << endl
             << "enter the hra & da: ";
        cin >> hra >> da;
        cout << "enter the basic salery: ";
        cin >> base_salery;
    }
    void display()
    {
        da = (da * base_salery) / 100;
        hra = (hra * base_salery) / 100;

        gross_salery = base_salery + da + hra;
        cout << "name: " << name << "\ncode: " << code << "\nda: " << da << "\nhra: " << hra << "\ngross_salery: " << gross_salery;
    }
};
int main()
{
    employee s1;
    s1.accept();
    s1.display();
    return 0;
}