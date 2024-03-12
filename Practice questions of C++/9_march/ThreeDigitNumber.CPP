// Q1. Take positive integer input and tell if it is a three digit number or not.
#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a > 99 && a < 1000)
    {
        cout << "NO is three digit no.";
    }
    else
    {
        cout << "No is not three digit no .";
    }
}