#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_data(int);
    void get_data(void);
};
void student ::set_data(int r)
{
    roll_number = r;
}
void student ::get_data(void)
{
    cout << "\n your roll number is: " << roll_number << endl;
}
class exam : public student /* here we successfully did the single inharitance */
{
protected:
    float AMI, PCI, DBMS, OOPS;

public:
    void set_marks(int, int, int, int);
    void get_marks(void);
};
void exam ::set_marks(int a, int b, int c, int d)
{
    AMI = a;
    PCI = b;
    DBMS = c;
    OOPS = d;
}
void exam::get_marks(void)
{
    cout << "\nyou enterd marks: "
         << "\t" << AMI << "\t" << PCI << "\t" << DBMS << "\t" << OOPS;
}
class result : public exam /* here we successfully did the multiple inharitance */
{
    float pr;

public:
    void display(void)
    {
        get_data();
        float pr = ((AMI + PCI + DBMS + OOPS) / 400) * 100;
        cout << "your percentage is: " << pr << "%" << endl;
    }
};
int main()
{
    int arr[4];
    int roll;
    cout << "\nenter the rollno: ";
    cin >> roll;
    cout << "\nenter the marks : ";
    for (int i = 0; i <= 3; i++)
    {
        cin >> arr[i];
    }
    result shiva;
    shiva.set_data(roll);
    shiva.set_marks(arr[0], arr[1], arr[2], arr[3]);
    shiva.get_marks();
    shiva.display();

    return 0;
}
/*
notes:
if we are inhariting B from A & C from B: [A---->B---->C]
    1. A is the base class fpr b and b is the base class forc
    2. A,B,C called inharitance path
*/