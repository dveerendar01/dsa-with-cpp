#include<bits/stdc++.h>
using namespace std;

int gettingSingleElement(vector<int>& arr) {
    int xorr = 0;
    for(int i=0; i<arr.size(); i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    if(n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 0;
    }
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int answ = gettingSingleElement(arr);
    cout << "The single element in the array is: " << answ << endl;
    return 0;
}