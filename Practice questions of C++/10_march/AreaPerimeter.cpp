// Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter
#include <iostream>
using namespace std;

int main()
{
    int l, b;
    cin >> l >> b;
    int area = l * b;
    int peri = 2 * (l + b);
    cout << "Area of rectangle is" << area << endl;
    cout << "Perimeter of rectangle is " << peri << endl;
    if (area > peri)
    {
        cout << "Area is greater than perimeter";
    }
    else
    {
        cout << "Area is less than perimeter";
    }
}