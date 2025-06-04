#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <int> arr(3);
    vector <int> rev;
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
        rev.push_back(arr[i]);
    }

    
    sort(arr.begin(),arr.end());
    cout << arr[0] << "\n" << arr[1] << "\n" << arr[2] << "\n";
    cout << "\n" << rev[0] << "\n" << rev[1] << "\n" << rev[2] << "\n";
    return 0;
}