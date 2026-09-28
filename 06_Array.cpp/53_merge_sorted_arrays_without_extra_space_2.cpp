#include<bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m) {
    int left = n-1;
    int right = 0;
    while(left >= 0 && right < m) {
        if(arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        }
        else {
            break;
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main() {
    int n, m;
    cout << "Enter n array size: ";
    cin >> n;
    cout << "Enter m array size: ";
    cin >> m;

    if(n<=0 || m<=0) {
        cout << "Invalid array size";
        return 0;
    }

    long long* arr1 = new long long[n];
    long long* arr2 = new long long[m];

    cout << "Enter arr1 elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter arr2 elements: ";
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

    delete[] arr1;
    delete[] arr2;

    return 0;
}

// TC : O(m(n,m)) + O(n log n) + O(m log m)
// SC : O(1)