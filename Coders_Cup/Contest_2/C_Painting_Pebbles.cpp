#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    int mn = 101, mx = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mx = max(mx, v[i]), mn = min(mn, v[i]);
    }

    if(mx - mn > k) {
        no;
        return 0;
    }
    yes;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < mn; j++) {
            cout << 1 << " ";
        }

        int st = 1;
        for(int j = mn; j< v[i]; j++) {
            cout << st++ << " ";
        }
        cout nl;
    }
    return 0;
}