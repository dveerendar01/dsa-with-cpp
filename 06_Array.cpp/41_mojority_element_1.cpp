#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> ls; // list
    map<int, int> mpp;
    int min = (int)(n/3) + 1;
    for(int i=0; i<n; i++) {
        mpp[nums[i]]++;
        if(mpp[nums[i]] == min) {
            ls.push_back(nums[i]);
        }
        if(ls.size() == 2) break;
    }
    // O(2 log 2)
    sort(ls.begin(), ls.end());
    return ls;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    if(n <= 0) {
        cout << "Size is Invalid";
        return 0;
    }

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    vector<int> result = majorityElements(nums);
    cout << "The final list is: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}