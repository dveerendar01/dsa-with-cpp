#include<bits/stdc++.h>
using namespace std;
long long merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    long long cnt = 0;

    while(left <= mid && right <=high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++) {
        arr[i] = temp[i - low];
    }
    return cnt;
}
long long mergeSort(vector<int>& arr, int low, int high) {
    long long cnt = 0;
    if(low >= high) return cnt;

    int mid = low + (high - low) / 2;

    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid+1, high);
    cnt += merge(arr, low, mid, high);
    return cnt;
}
long long numberOfInversions(vector<int>& a, int n) {
    return mergeSort(a, 0, n-1);
}

int main() {
    int n;
    cout << "Enter number of elements: ";

    if(!(cin >> n) || n < 0) {
        cout << "Invalid array size." << endl;
        return 1;
    } 

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for(int i=0; i<n; i++) {
        if(!(cin >> arr[i])) {
            cout << "Invalid array element." << endl;
            return 1;
        }
    }

    long long inversions = numberOfInversions(arr, n);
    cout << "\nNumber of Inversions: " << inversions << endl;
    return 0;
}