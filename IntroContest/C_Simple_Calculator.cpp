#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    long long int mul = 1LL * a * b;
    cout << a << " + " << b << " = " << a + b << "\n";
    cout << a << " * " << b << " = " << mul << "\n";
    cout << a << " - " << b << " = " << a - b << "\n";
    return 0;
}