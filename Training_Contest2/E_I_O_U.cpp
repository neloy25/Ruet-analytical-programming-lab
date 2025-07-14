#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;
    vector<int> debt(n+1,0);
    int res = 0;
    while(m--){
        int a,b,c;
        cin >> a >> b >> c;

        debt[a] = debt[a] +  c;
        debt[b] = debt[b] - c;
    }


    for(int val : debt) {
        if(val > 0) res+= val;
    }

    cout << res << endl;

    return 0;

}

