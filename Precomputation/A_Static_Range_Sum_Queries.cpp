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
    vector<ll> pre_sum(n + 1);
    for(auto &x : v) {
        cin >> x;
    }

    pre_sum[0] = 0;

    for(int i = 1; i <= n; i++) {
        pre_sum[i] = v[i - 1] + pre_sum[i - 1];
    }

    while(q--) {
        int a,b;
        cin >> a >> b;

        cout << pre_sum[b] - pre_sum[a - 1] << endl;
    }
    return 0;
}

