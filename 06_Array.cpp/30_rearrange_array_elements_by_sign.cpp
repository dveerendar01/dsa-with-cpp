#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 0);
    int posIndex = 0;
    int negIndex = 1;
    for(int i = 0; i < n; i++) {
        if(nums[i] < 0) {
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
        else {
            ans[posIndex] = nums[i];
            posIndex += 2;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    if(n <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }
    vector<int> nums(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> ans = rearrangeArray(nums);
    cout << "Rearranged array: ";
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}