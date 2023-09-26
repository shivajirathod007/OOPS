#include <iostream>
using namespace std;

class base
{
public:
    int num;
    virtual void setdata(); 
    virtual void display(); 
};

void base::setdata()
{
    cout << "Enter the data for the base class: ";
    cin >> num;
}

void base::display()
{
    cout << "Data in  base class: " << num << endl;
}

class derived : public base {
public:
    void setdata();
    void display();
};

void derived::setdata()
{
    cout << "Enter the data for the derived class: ";
    cin >> num;
}

void derived::display()
{
    cout << "Data in  derived class: " << num << endl;
}

int main()
{
    base b1, *ptr;
    derived d1;
    ptr = &b1;
    ptr->setdata();
    ptr->display();
    ptr = &d1;
    ptr->setdata();
    ptr->display();

    return 0;
}
/*
#include <iostream>
using namespace std;

class MyClass
{
public:
    int x;

    MyClass(int y)
    {
        this->x = y; // Using 'this' to distinguish between member variable and parameter
    }

    void printX()
    {
        cout << "x = " << this->x << endl;
    }

    MyClass *incrementX()
    {
        this->x++;
        return this; // Returning the current object
    }
};

int main()
{
    MyClass obj1(5);
    obj1.printX(); // Outputs: x = 5

    obj1.incrementX()->incrementX()->incrementX(); // Method chaining
    obj1.printX();                                 // Outputs: x = 8

    return 0;
}


*/
