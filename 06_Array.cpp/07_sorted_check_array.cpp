#include<bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int> arr, int n) {
    for(int i=1; i<n; i++) {
        if(arr[i] < arr[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if(n <= 0) {
        cout << "Array size is Invalid" << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter array elements: ";

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    if(isSorted(arr, n)) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}