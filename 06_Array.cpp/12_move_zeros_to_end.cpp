#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> arr) {
    vector<int> temp;
    for(int i=0; i<n; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }
    int nZ = temp.size();
    for(int i=0; i<nZ; i++) {
        arr[i] = temp[i];
    }
    for(int i=nZ; i<n; i++) {
        arr[i] = 0;
    }
    return arr;
}

int main() {
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter Array Elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vector<int> result = moveZeros(n, arr);
    cout << "Array after moving zeros to the end: ";
    for(int i=0; i<n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}