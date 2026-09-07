#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int currentSum = nums[0];
    int maxSum = nums[0];

    for(int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
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
    int answer = maxSubArray(nums);
    cout << "Maximum subarray sum: " << answer << endl;
    return 0;
}