// Q4. Calculating Simple Interest

#include <iostream>
using namespace std;

int main()
{
    float p, r, t;
    cin >> p >> r >> t;
    float si = (p * r * t) / 100;
    cout << "Simple Interest is : " << si << endl;
}