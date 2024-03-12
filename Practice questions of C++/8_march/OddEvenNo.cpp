// Q1. Take positive integer input and tell if it is even or odd.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if ((n % 2) == 0)
    {
        cout << "NO. is even";
    }
    else
    {
        cout << "No. is odd";
    }
}