//  Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the sides of a triangle: " << endl;
    cin >> a >> b >> c;
    if (a == b == c)
    {
        cout << "Equilateral Triangle" << endl;
    }
    else if (a == b || a == c || b == c)
    {
        cout << "Scalene Triangle" << endl;
    }
    else
    {
        cout << "Isosceles Triangle" << endl;
    }
}