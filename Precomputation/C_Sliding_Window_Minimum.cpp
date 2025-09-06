#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int x, a, b, c;
    cin >> x >> a >> b >> c;
    long long tmp = x;
    deque<pair<int,long long>> dq;
    dq.push_back({0,tmp});
    long long res = 0;
    if (k == 1)
        res ^= dq.front().second;
    for (int i = 1; i < n; i++)
    {
        tmp = (tmp * a + b) % c;
        while (!dq.empty() && tmp <= dq.back().second)
        {
            dq.pop_back();
        }

        dq.push_back({i,tmp});

        if (dq.front().first <= i - k)
        {
            dq.pop_front();
        }

        if (i >= k - 1)
        {
            res ^= dq.front().second;
        }
    }

    cout << res << endl;
    return 0;
}
