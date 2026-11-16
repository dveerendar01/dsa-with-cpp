#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(nums[mid] == target) return mid;
        else if(target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int n, target;
    cin >> n;

    if(n < 0) {
        cout << "Array size is Invalid" << endl;
        return 1;
    }

    vector<int> nums(n);
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    cin >> target;

    int ans = search(nums, target);
    if(ans != -1) {
        cout << "Element found at index: " << ans << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}