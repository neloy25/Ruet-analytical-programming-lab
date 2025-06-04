#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c;
    cin >> a >> b >> c;

    int mx = max({a,b,c});
    int mn = min({a,b,c});

    cout << mn << " " << mx << "\n";
    return 0;
}