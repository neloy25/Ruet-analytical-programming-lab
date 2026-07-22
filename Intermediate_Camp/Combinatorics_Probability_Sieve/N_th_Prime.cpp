#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const ll N = 10000000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<bool> isPrime(N, true);
    isPrime[0] = isPrime[1] = false;

    for(ll i = 2; i * i < N; i++) {
        if(isPrime[i]) {
            for(ll j = i * i; j < N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    ll cnt = 0;
    ll ans = -1;

    for(ll i = 2; i < N; i++) {
        if(isPrime[i]) {
            cnt++;
            if(cnt == n) {
                ans = i;
                break;
            }
        }
    }

    cout << ans nl;
    return 0;
}