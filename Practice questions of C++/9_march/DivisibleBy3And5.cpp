// Q2. Take positive integer input and tell if it is divisible by 5 and 3.
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a % 5 == 0 && a % 3 == 0)
    {
        cout << "No. is divisible by 5 and 3";
    }
    else if (a % 5 == 0)
    {
        cout << "No is Divisible by 5 " << endl;
    }
    else if (a % 3 == 0)
    {
        cout << "No is Divisible by 3 " << endl;
    }
    else
    {
        cout << "No is not Divisible by 5 and 3 " << endl;
    }
}