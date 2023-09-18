#include <iostream>
using namespace std;
class company
{
    int id;
    /*here we created static member 0f company class*/
    static int num; /*here we define the static(we don't have to define 0 because it's alerady 0 defind if you want to start from diffrent number yo can't do from here..)*/

public:
    void getdata(void);
    void displaydata(void);
    static void getcount(void)
    {
        cout << "the value of number: " << num;
    }
};
int company ::num = 1 /*=120 --> here you can start from any number */; /*here we declare static variable */
void company::getdata(void)
{
    cout << "enter the employe id: ";
    cin >> id;
    num++;         /*we increase the number of member after the next loop*/
    displaydata(); /*we displayed the data using the nesting of function*/
}
void company::displaydata(void) /*here we created static function*/
{
    cout << "your employe ID is:" << id << "  your employe rank is: " << company::num << endl;
}

int main()
{
    company JUSThink, jagdab, shiva;
    company::getcount();
    JUSThink.getdata(); /*here we called static member */
    company::getcount();
    jagdab.getdata();
    company::getcount(); /*here we call static function*/
    shiva.getdata();
    return 0;
}

// #include <iostream>

// void incrementCount()
// {
//     static int count = 0; // Static data variable

//     count++;
//     std::cout << "Count: " << count << std::endl;
// }

// int main()
// {
//     incrementCount(); // Count: 1
//     incrementCount(); // Count: 2
//     incrementCount(); // Count: 3

//     return 0;
// }
