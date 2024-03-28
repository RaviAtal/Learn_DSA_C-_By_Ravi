// Display this AP - 1,3,5,7,9.. upto ‘n’ terms. 
#include<iostream>
using namespace std;

int main(){
    int n,first,d;
    cin >> n;
    first=1;
    d=2;
     for(int i=1; i<=n;i++){
            cout << first +i*d<<endl;
    }
}