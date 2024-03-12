// Q4. Given the radius of the circle predict whether numerically area of this
//        circle is larger than the circumference or not
#include <iostream>
using namespace std;

int main()
{
    // arer= 3.14 r r
    // cir -2(3.14) r
    int r;
    cin >> r;
    float pi = 3.14;
    float area = pi * r * r;
    float cir = 2 * pi * r;
    cout << "Area of Circle is " << area << endl;
    cout << "Cirumfrence of Circle is " << cir << endl;

    if (area > cir)
    {
        cout << "Area is larger then circumference" << endl;
    }
    else
    {
        cout << "Circumference is larger then area" << endl;
    }
}