#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& arr, int N) {
    int xor1 = 0;
    int xor2 = 0;
    int n = N-1;
    for(int i=0; i<n; i++) {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if(n <= 0) {
        cout << "Invalid array";
        return 0;
    }

    vector<int> arr(n-1);
    cout << "Enter "<< n-1 <<" array elements: ";
    for(int i=0; i<n-1; i++) {
        cin >> arr[i];
    }

    int result = missingNumber(arr, n);
    cout << "The missing number in an array is : " << result << endl;
    return 0;
}