#include<bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;
    for(int i=0; i<n; i++) {
        if(nums[i]-1 == lastSmaller) {
            cnt += 1;
            lastSmaller = nums[i];
        } else if(lastSmaller != nums[i]) {
            cnt = 1;
            lastSmaller = nums[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if(n <= 0) {
        cout << "Invalid array size";
        return 0;
    }

    vector<int>(nums);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    int result = longestSuccessiveElements(nums);
    cout << "The Longest Succesive Elements are: " << result << endl;
    return 0;
}