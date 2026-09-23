#include<bits/stdc++.h>
using namespace std;

int subarraysWithXorK(vector<int> a, int k) {
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++; // {0, 1}
    int cnt = 0;
    for(int i=0; i<a.size(); i++) {
        xr = xr ^ a[i];
        // k
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    int k;
    cout << "Enter K value: ";
    cin >> k;

    int result = subarraysWithXorK(a, k);
    cout << "The result is: " << result << endl;
    return 0;
}

// TC: O(N) or O(N log N)
// SC: O(N)