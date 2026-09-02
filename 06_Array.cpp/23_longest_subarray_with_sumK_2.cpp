#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& a, long long k) {
    int left = 0;
    int right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while(right < n) {
        while(left <= right && sum > k) {
            sum -= a[left];
            left++;
        }
        if(sum == k) {
            maxLen = max(maxLen, right-left+1);
        }
        right++;
        if(right < n) sum += a[right];
    }
    return maxLen;
}

int main() {
    int n;
    long long k;
    cout << "Enter the array size: ";
    cin >> n;
    if(n <= 0) {
        cout << "Array size must be > than 0." << "\n";
        return 0;
    }
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    cout << "Enter the sum K: ";
    cin >> k;

    int answ = longestSubarrayWithSumK(a, k);
    cout << "The length of the longest subarray with sum K is: " << answ << "\n";
    return 0;
}