#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArrayLeft(vector<int> &arr, int n) {
    if(n <= 1) return arr; // No rotation needed for empty or single-element arrays

    int temp = arr[0];
    for(int i=1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
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
    rotateArrayLeft(arr, n);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}