// Q3. Take 3 positive integers input and print the greatest of them.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // this is for more then 3 no.
    // int big;
    if (a > b && a > c)
    {
        cout << "A is Greatest";
    }
    else if (b > a && b > c)
    {
        cout << "B is greatest";
    }
    else
    {
        cout << "C is greatest";
    }
}
