#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<pair<int,int>> v;
    
    for(int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        v.push_back({a,1});
        v.push_back({b,-1});
    }

    sort(v.begin(),v.end());
    int sum = 0;
    int res = 0;
    for(int i = 0; i < v.size();i++) {
        sum += v[i].second;
        res = max(res,sum);
    }

    cout << res << endl;
    return 0;
}

