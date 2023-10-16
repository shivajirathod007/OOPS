// #include <iostream>
// // #include<cstdlib>
// // #include<fstream>
// // #include <cstring>
// // #include <windows.h>
// using namespace std;
// class distance
// {
// public:
//     int feet, inch;
//     distance(int t, int e)
//     {

//         this->feet = t;
//         this->inch = e;
//     }
//     distance operator+(distance &d2)
//     {
//         distance d3;
//         d3.feet = this->feet + d2.feet;
//         d3.inch = this->inch + d2.inch;
//         if (d3.inch >= 12)
//         {
//             d3.feet += d3.inch / 12;
//             d3.inch %= 12;
//         }

//         return d3;
//     }
// };
// int main()
// {
//     distance d1(12, 23);
//     distance d2(13, 23);
//     distance d3 = d1 + d2;
//     cout << "total feet: " << d3.feet << "inch: " << d3.inch;

//     return 0;
// }

#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inch;
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int t, int e)
    {
        this->feet = t;
        this->inch = e;
    }

    Distance operator+(Distance &d2)
    {
        Distance d3;
        d3.feet = this->feet + d2.feet;
        d3.inch = this->inch + d2.inch;
        if (d3.inch >= 12)
        {
            d3.feet += d3.inch / 12;
            d3.inch %= 12;
        }
        return d3;
    }
};

int main()
{
    Distance d1(12, 23);
    Distance d2(13, 23);
    Distance d3 = d1 + d2;
    cout << "Total feet: " << d3.feet << " inches: " << d3.inch << endl;

    return 0;
}
