#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
    int i=0;
    for(int j=1; j<n; j++) {
        if(arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main() {
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    if(n <= 0) {
        cout << "The array size is Invalid";
        return 0;
    }
    vector<int> arr(n);
    for(int j=0; j<n; j++) {
        cin >> arr[j];
    }
    int result = removeDuplicates(arr, n);
    cout << "Number of unique elements: " << result << endl;
    cout << "Array after removing duplicates: ";

    for(int i=0; i<result; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}