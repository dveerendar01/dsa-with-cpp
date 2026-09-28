#include<bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m) {
    long long arr3[n + m];
    int left = 0;
    int right = 0;
    int index = 0;
    while(left < n && right < m) {
        if(arr1[left] <= arr2[right]) {
            arr3[index] = arr1[left];
            left++, index++;
        }
        else {
            arr3[right] = arr2[right];
                right++, index++;
        }
    }
    while(left < n) {
        arr3[index] = arr1[left];
        index++, left++;
        // OR
        // arr3[index++] = arr1[left++];
    }
    while(right < m) {
        arr3[index++] = arr2[right++];
    }

    for(int i=0; i<n+m; i++) {
        if(i<n) arr1[i] = arr3[i];
        else arr2[i-n] = arr3[i];
    }
}

int main() {
    int n, m;
    cout << "Enter n size: ";
    cin >> n;
    cout << "Enter m size: ";
    cin >> m;

    if(n<=0 || m<=0) {
        cout << "Invalid array size";
        return 0;
    }

    long long* arr1 = new long long[n];
    long long* arr2 = new long long{m};

    cout << "Enter elements of arr1 in sorted order: ";
    for(int i=0; i<n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of arr2 in sorted order: ";
    for(int i=0; i<m; i++) {
        cin >> arr2[i];
    }

    merge(arr1, arr2, n, m);
    cout << "arr1 after merging: ";
    for(int i=0; i<n; i++) {
        cout << arr1[i] << " ";
    }

    cout << endl;

    cout << "arr2 after merging: ";
    for(int i=0; i<m; i++) {
        cout << arr2[i] << " ";
    }

    cout << endl;

    delete[] arr1;
    delete[] arr2;

    return 0;
}