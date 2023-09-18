#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
using namespace std;
class company
{
    int Itemid[10];
    int itemprize[20];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setiteam(void);
    void display(void);
};
void company::setiteam(void)
{
    // cout << "enter your IteamID: "<<counter+1;
    // cin >> Itemid[counter];
    // cout << endl
    //      << "enter your IteamPrize: ";
    // cin >> itemprize[counter];
    // counter++;
    int n;
    cout << "enter the number that you wanna set: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "enter your IteamID " << counter + 1
             << ": ";
        cin >> Itemid[counter];
        cout
            << "enter your IteamPrize: ";
        cin >> itemprize[counter];
        counter++;
    }
}
void company::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the id of your iteam: " << Itemid[i] << "  ||  prize is: " << itemprize[i] << endl;
    }
}
int main()
{
    company jagdab;
    jagdab.initcounter();
    jagdab.setiteam();
    jagdab.display();

    return 0;
}