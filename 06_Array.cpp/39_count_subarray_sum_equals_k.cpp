#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums,int k) {
    unordered_map<int,int> prefixSumMap;
    prefixSumMap[0] = 1;
    int sum = 0;
    int count = 0;

    for(int i=0; i<nums.size(); i++) {
        sum += nums[i];
        int rem = sum-k;
        if(prefixSumMap.find(rem) != prefixSumMap.end()) {
            count += prefixSumMap[rem];
        }
        prefixSumMap[sum]++;
    }
    return count;
}

// int findAllSubarraysWithGivenSum(vector<int>& arr, int k) {
//     unordered_map<int, int> mpp;
//     mpp[0] = 1;
//     int prefixSum = 0, cnt = 0;
//     TC : O(N) + O(log N), bcuz we are using unordered map
//     SC : O(N)
//     for(int i=0; i<arr.size(); i++) {
//         prefixSum += arr[i];
//         int remove = prefixSum - k;
//         cnt += mpp[remove];
//         mpp[prefixSum] += 1;
//     }
//     return cnt;
// }

int main() {
    int n,k;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    cout << "Enter K: ";
    cin >> k;

    int ans = subarraySum(nums,k);
    cout << "Number of subarrays with sum K: " << ans << endl;
    return 0;
}