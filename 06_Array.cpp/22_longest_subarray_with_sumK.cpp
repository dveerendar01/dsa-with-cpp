#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& a, long long k) {
    map<long long, int> prefixSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i=0; i<a.size(); i++) {
        sum += a[i];
        if(sum == k) {
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        if(prefixSumMap.find(rem) != prefixSumMap.end()) {
            int len = i - prefixSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(prefixSumMap.find(sum) == prefixSumMap.end()) {
            prefixSumMap[sum] = i;
        }
    }
    return maxLen;
}

int main() {
    int n;
    long long k;
    cout << "Enter array size: ";
    cin >> n;
    if(n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 0;
    }
    vector<int> a(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    cout << "Enter sum K: ";
    cin >> k;
    int result = longestSubarrayWithSumK(a, k);
    cout << "Length of longest subarray with sum " << k << " is: " << result << endl;
    return 0;
}