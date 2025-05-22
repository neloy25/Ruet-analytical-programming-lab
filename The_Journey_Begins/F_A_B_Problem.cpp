#include<iostream>
#include<iomanip>
using namespace  std;

int main(){
    int a ,b;
    cin >> a >> b;
    int c = a / b;
    int d = a % b;
    double e = a * 1.00;
    double f = e / b;
    cout << c << " " << d << " ";
    cout << fixed << setprecision(5) << f <<"\n";
    return 0;
}
