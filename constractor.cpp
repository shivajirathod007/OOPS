#include <iostream>
using namespace std;
class constractor
{
    int a, b;

public:
    /*
    1---> creating the constructor
    2---> constructor is a special member function with the same name as of the data of the class.
    3---> it is automticaly invoked(called)whenever an object is created
    */
    constractor(void);
    void printthenum()
    {
        cout << "your ans is: " << a << " + " << b << "i";
    }
};
constractor::constractor(void) // -------> this is called default constructor it takes no parameters.
{
    a = 50;
    b = 56;
    cout << "hii this is  a default constructor" << endl;
}
int main()
{
    constractor shiva;
    shiva.printthenum();
    return 0;
}
/*
1---> it should be decleared in the public section of the class
2---> they are automaticaly invoked whenever object is created
3---> they can't return values and no do not have return types
4---> it can have default arguments
5---> we can't refer to thier address

*/