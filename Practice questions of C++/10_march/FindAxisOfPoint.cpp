// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << "Origin" << endl;
    }
    else if (x == 0)
    {
        cout << "Y-axis" << endl;
    }
    else if (y == 0)
    {
        cout << "X-axis" << endl;
    }
    else
    {
        cout << "Not on the x-axis or y-axis" << endl;
    }
}