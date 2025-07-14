#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> arr(n);
    for(auto &x : arr) cin >> x;

    vector<int> pre(n);
    vector<int> suf(n);
    pre[0] = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i - 1]) {
            pre[i] = pre[i - 1] + 1;
        } else {
            pre[i] = 1;
        }
    }

    suf[n - 1] = 1; 
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] < arr[i + 1]) {
            suf[i] = suf[i + 1] + 1;
        } else {
            suf[i] = 1;
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(i < n - 2) {
            if(arr[i] < arr[i + 2]){
                ans = max(ans, pre[i] + suf[i + 2]);
            }
        }
        ans = max(ans,pre[i]);
    }
    cout << ans << endl;
    return 0;

}

