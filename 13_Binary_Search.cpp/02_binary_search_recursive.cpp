#include<bits/stdc++.h>
using namespace std;

int bs(vector<int>& nums, int low, int high, int target) {
    if(low > high) return -1;
    int mid = low + (high - low) / 2;
    if(nums[mid] == target) return mid;
    else if(target > nums[mid]) return bs(nums, mid+1, high, target);
    else return bs(nums, low, mid-1, target);
}

int search(vector<int>& nums, int target) {
    return bs(nums, 0, static_cast<int>(nums.size())-1, target);
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