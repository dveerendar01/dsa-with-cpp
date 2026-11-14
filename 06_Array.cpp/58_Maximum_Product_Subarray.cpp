#include<bits/stdc++.h>
using namespace std;

int subarrayWithMaximumProduct(vector<int>& arr) {
    int ans = INT_MIN;
    int n = arr.size();

    int prefix = 1;
    int suffix = 1;

    for(int i=0; i<n; i++) {
        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;

        prefix *= arr[i];
        suffix *= arr[n-i-1];

        ans = max(ans, max(prefix, suffix));
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = subarrayWithMaximumProduct(arr);
    cout <<"The maximum product of the subarray is: " << ans << endl;
    return 0;
}

//TC: O(n)
//SC: O(1)