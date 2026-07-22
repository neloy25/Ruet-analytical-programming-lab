#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

ll power(ll a, ll b) {
    ll res = 1;
    while (b--) res *= a;
    return res;
}

void solve() {
    ll n;
    cin >> n;
    map<ll,ll> prime_factor;

    ll m = n;
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            prime_factor[i]++;
            n /= i;
        }
    }

    if (n > 1)
        prime_factor[n]++;

    ll res = 1;
    for(auto [p,e] : prime_factor) {
        res *= ((power(p, e + 1) - 1) / (p - 1));
    }
    cout << res - m nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}