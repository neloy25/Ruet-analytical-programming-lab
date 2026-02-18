#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

ll digit_sum(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}


void solve()
{
    ll n, q;
    cin >> n >> q;
    set<int> active;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > 9)
            active.insert(i);
    }

    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;

        if (a == 1)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            auto it = active.lower_bound(l);
            while (it != active.end() && *it <= r)
            {
                int idx = *it;

                v[idx] = digit_sum(v[idx]);

                if (v[idx] <= 9)
                    it = active.erase(it);
                else
                    ++it;
            }
        }

        if(a == 2) {
            int x;
            cin >> x;
            x--;
            cout << v[x] nl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}