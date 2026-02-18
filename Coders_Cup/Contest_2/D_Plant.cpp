#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const ll MOD = 1e9 + 7;

ll power(ll x, ll n) {
    ll ans = 1;
    while(n) {
        if(n & 1) {
            ans = (ans * x) % MOD;
        }

        n >>= 1;
        x = (x * x) % MOD;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    ll n;
    cin >> n;

    ll a = (power(4, n) + power(2, n)) % MOD;
    ll inv2 = power(2, MOD - 2);
    cout << (a * inv2) % MOD nl;
    return 0;
}