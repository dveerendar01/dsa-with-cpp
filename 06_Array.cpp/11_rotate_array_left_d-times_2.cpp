#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d) {
    d = d % n;

    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int d;
    cout << "Enter number of positions to rotate: ";
    cin >> d;
    leftRotate(arr, n, d);
    cout << "Array after left roatation: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

// Time Complexity: O(2n)
// Space Complexity: O(1)