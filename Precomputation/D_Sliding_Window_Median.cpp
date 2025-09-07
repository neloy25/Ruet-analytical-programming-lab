#include<bits/stdc++.h>
using namespace std;

class SlidingMedian {
    multiset<int> lo,hi;
public:
    void add(int num) {
        if(lo.empty() || num <= *lo.rbegin()) lo.insert(num);
        else hi.insert(num);
        balance();
    }

    void remove(int num) {
        if(lo.find(num) != lo.end()) lo.erase(lo.find(num));
        else hi.erase(hi.find(num));
        balance();
    }

    void balance() {
        while(lo.size() > hi.size() + 1) {
            hi.insert(*lo.rbegin());
            lo.erase(prev(lo.end()));
        }
        while(hi.size() > lo.size()) {
            lo.insert(*hi.begin());
            hi.erase(hi.begin());
        }
    }


    int getMedian() {
        return *lo.rbegin();
    }

};

vector<int> slidingMedian(vector<int> &nums,int k) {
    SlidingMedian sm;
    vector<int> medians;
    for(int i = 0; i < nums.size(); i++) {
        sm.add(nums[i]);
        if(i >= k - 1) {
            medians.push_back(sm.getMedian());
            sm.remove(nums[i - k + 1]);
        }
    }
    return medians;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin >> n >> k;

    vector<int> nums(n);
    for(auto &x : nums) cin >> x;
    vector<int> res = slidingMedian(nums,k);

    for(int val : res) {
        cout << val << " ";
    }
    return 0;
}

