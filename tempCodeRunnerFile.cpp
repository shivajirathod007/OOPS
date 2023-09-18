#include <iostream>
// #include<cstdlib>
// #include <cstring>
// #include <windows.h>
using namespace std;
class a
{
    int n1, n2;
    // a(int x, int y)
    // {
    //     n1 = x;
    //     n2 = y;
    // }
public:
    friend void swap();
};
void swap()
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
int main()
{

    return 0;
}