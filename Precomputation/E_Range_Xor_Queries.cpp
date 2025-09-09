#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q;
    cin >> n >> q;
    vector<ll> v(n);
    vector<ll> pre_xor(n + 1);
    for(auto &x : v) {
        cin >> x;
    }

    pre_xor[0] = 0;

    for(int i = 1; i <= n; i++) {
        pre_xor[i] = v[i - 1] ^ pre_xor[i - 1];
    }

    while(q--) {
        int a,b;
        cin >> a >> b;

        cout << (pre_xor[b] ^ pre_xor[a - 1]) << endl;
    }
    return 0;
}

