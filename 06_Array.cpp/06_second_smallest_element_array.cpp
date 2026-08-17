#include<bits/stdc++.h>
using namespace std;

int ssmallestElement(vector<int> &arr, int n) {
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for(int i=1; i<n; i++) {
        if(arr[i] < smallest) {
            ssmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] != smallest && arr[i] < ssmallest) {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if(n < 2) {
        cout << "Array should have at least two elements to find the second smallest element." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter array elements: ";
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int result = ssmallestElement(arr, n);

    if(result == INT_MAX) {
        cout << "There is no second smallest element in the array" << endl;
    } else {
        cout << "Second Smallest Element in the Array is: " << result << endl;
    }

    return 0;
}