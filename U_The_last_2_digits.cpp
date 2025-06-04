#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int mul = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
    cout << setw(2) << setfill('0') << mul << "\n";
    return 0;
}