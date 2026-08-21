#include<bits/stdc++.h>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr) {
    for(int i=0; i<num; i++) {
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, num;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cin >> num;
    int ans = linearSearch(n, num, arr);
    if(ans == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element fount at index: " << ans << endl;
    }
    return 0;
}