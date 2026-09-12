#include <bits/stdc++.h>
using namespace std;

vector<int> superiorElements(vector<int>& arr) {
    int n = arr.size();
    int maxi = INT_MIN;
    vector<int> answ;

    // Traverse from right to left
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] > maxi) {
            answ.push_back(arr[i]);
        }
        // Update maximum
        maxi = max(maxi, arr[i]);
    }
    // Leaders are collected from right to left,
    // so sort them in ascending order
    sort(answ.begin(), answ.end());
    return answ;
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

    vector<int> result = superiorElements(arr);
    cout << "Superior elements: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}