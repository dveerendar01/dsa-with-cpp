#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr) {
    int cnt = 0;
    int element = 0;
    for(int i=0; i<arr.size(); i++) {
        if(cnt == 0) {
            cnt = 1;
            element = arr[i];
        } else if(arr[i] == element) {
            cnt++;
        } else {
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == element) {
            cnt1++;
        }
    }
    if(cnt1 > (arr.size() / 2)) {
        return element;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    if(n <= 0) {
        cout << "Invalid array size" << endl;
        return 0;
    }
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int answ = majorityElement(arr);
    if(answ == -1) {
        cout << "No majority element" << endl;
    } else {
        cout << "Majority element is: " << answ << "\n";
    }
    return 0;
}