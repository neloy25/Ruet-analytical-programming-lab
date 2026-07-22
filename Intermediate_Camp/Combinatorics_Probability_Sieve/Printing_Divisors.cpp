#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve(int tc) {
    ll n;
    cin >> n;

    map<ll,ll> pf;

    while(n % 2 == 0) {
        pf[2]++;
        n /= 2;
    }

    for(ll i = 3; i * i <= n; i+=2) {
        while(n % i == 0) {
            pf[i]++;
            n /= i;
        }
    }

    if(n > 1) pf[n]++;

    vector<ll> ans{1};
    for(auto [val, e] : pf) {
        int lim = ans.size();
        for(ll i = 1; i<= e; i++) {
            ll last = ans.size();
            for(ll j = 1; j <= lim; j++) {
                ans.push_back(ans[last - j] * val);
            }
        }
    }
    cout << "Case " << tc << ":" nl;
    for(ll val : ans) {
        cout << val << " ";
    }
    cout nl;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        solve(i);
    }

    cout << log10(1LL << 32) nl;
    return 0;
}