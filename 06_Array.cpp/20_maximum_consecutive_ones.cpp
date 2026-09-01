#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxi = 0;
    int cnt = 0;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] == 1) {
            cnt++;
            maxi = max(maxi, cnt);
        } else {
            cnt = 0;
        }
    }
    return maxi;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    if(n < 0) {
        cout << "Array size cannot be negative." << "\n";
        return 0;
    }
    vector<int> nums(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    int result = findMaxConsecutiveOnes(nums);
    cout << "Maximum consecutive ones: " << result << endl;
    return 0;
}