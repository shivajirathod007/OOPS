#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
using namespace std;
class shiva
{
    string s; /*here string is by defualt private in the classs, every variable by default is private*/

public:
    void takenum();
    void checknum();
    void ones_complement();
    void display();
};
void shiva::takenum()
{
    cout << "enter the nukmber: ";
    cin >> s;
}
void shiva::checknum()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "entered encorrect binary numbers...";
            exit(0);
        }
    }
}
void shiva::ones_complement()
{
    checknum(); /*it's called the nesting function in c++ inshort we can use function in function to com[lete the tasks using the nesting of member */
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void shiva::display()
{
    cout << "displaying the regenrated ouptut" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    shiva b;
    b.takenum();
    // b.checknum(); ----> used the nesting function
    b.ones_complement();
    b.display();

    return 0;
}