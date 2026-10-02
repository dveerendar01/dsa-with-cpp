#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> arr) {
    long long n = arr.size();
    // S - Sn = x - y
    // S2 - S2N
    long long SN = (n * (n+1)) / 2;
    long long S2N = (n * (n+1) * (2*n+1)) / 6;

    long long S = 0, S2 = 0;

    for(int i=0; i<n; i++) {
        S += arr[i];
        S2 += (long long)arr[i] * (long long)arr[i];
    }

    long long val1 = S - SN; // x - y;
    long long val2 = S2 - S2N;

    val2 = val2 / val1; // x + y
    
    long long x = (val1 + val2) / 2;
    long long y = x - val1;
    return {(int)x, (int)y};
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if(n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array (1 to " << n << "): ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] < 1 || arr[i] > n) {
            cout << "Invalid input. Please enter numbers between 1 and " << n << "." << endl;
            return 0;
        }
    }

    vector<int> ans = findMissingRepeatingNumbers(arr);
    cout << "Repeating number: " << ans[0] << endl;
    cout << "Missing number: " << ans[1] << endl;

    cout << "Arrays: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}