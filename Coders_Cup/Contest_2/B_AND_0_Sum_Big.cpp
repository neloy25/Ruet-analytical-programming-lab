#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const ll MOD = 1e9+7;
ll pow(ll n,ll k){
    int res = 1;
    for(int i = 1; i <= k; i++) {
        res = (res * n) % MOD;
    }
    return res;
}

void solve() {
    ll n,k;
    cin >> n >> k;

    
    cout << pow(n,k) nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}