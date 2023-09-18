#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
using namespace std;
int fibo(int n);
int facto(int n);
int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
    cout << "your fibonacci series term value is : " << fibo(n) << endl;
    cout << "your factorial is: " << facto(n);
    return 0;
}
int facto(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return n * facto(n - 1);
}
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
        return fibo(n - 1) + fibo(n - 2);
}