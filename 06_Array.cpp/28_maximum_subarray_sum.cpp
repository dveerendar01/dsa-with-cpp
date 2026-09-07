#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(vector<int>& arr, int n) {
    long long sum = 0;
    long long maxi = LLONG_MIN;

    for(int i=0; i<n; i++) {
        sum += arr[i];

        if(sum > maxi) {
            maxi = sum;
        }
        if(sum < 0) {
            sum = 0;
        }
    }
    return maxi;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if(n <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long answer = maxSubarraySum(arr, n);
    cout << "Maximum subarray sum: " << answer << endl;
    return 0;
}