#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    vector<int> feq(k, 0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        feq[v[i] % k]++;
    }
    int ans = (feq[0] / 2) * 2;
    for(int i = 1; i < k; i++) {
        int need = k - i;
        if(i == need) {
            ans += (feq[i] / 2) * 2;
        }
        else ans+= min(feq[i], feq[need]);
    }
    cout << ans nl;
    return 0;
}