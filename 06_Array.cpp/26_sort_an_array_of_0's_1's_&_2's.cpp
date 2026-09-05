#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &arr, int n) {
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    if(n < 2 ) {
        cout << "Array must contains at least 2 elements.\n";
        return 0;
    }
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort012(arr, n);
    cout << "Sorted array: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}