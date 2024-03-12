// Q2. Take positive integer input and tell if it is divisible by 5 or not
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a % 5 == 0)
    {
        cout << "No." << a << " is divisible by 5 ";
    }
    else
    {
        cout << "No. is not divisible by 5 ";
    }
}