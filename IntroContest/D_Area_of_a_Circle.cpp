#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a;
    cin >> a;
    double pi = 3.141592653;
    double area = pi * a * a;
    cout << fixed << setprecision(9) << area;
    return 0;
}