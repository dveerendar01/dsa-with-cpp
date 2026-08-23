#include<bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> arr1, vector<int> arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i=0;
    int j=0;

    vector<int> unionArr;
    while(i<n1 && j<n2) {
        if(arr1[i] <= arr2[j]) {
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
        } else {
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]) {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(j<n2) {
        if(unionArr.size() == 0 || unionArr.back() != arr2[j]) {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    while(i<n1) {
        if(unionArr.size() == 0 || unionArr.back() != arr1[i]) {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    return unionArr;
}

int main() {
    int n1, n2;
    cout << "Enter arr1 size: ";
    cin >> n1;
    cout << "Enter arr2 size: ";
    cin >> n2;

    if(n1 < 0 || n2 < 0) {
        cout << "Invalid array size" << endl;
        return 0;
    }

    vector<int> arr1(n1), arr2(n2);
    cout << "Enter arr1 elements: ";
    for(int i=0; i<n1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter arr2 elements: ";
    for(int j=0; j<n2; j++) {
        cin >> arr2[j];
    }

    vector<int> result = sortedArray(arr1, arr2);
    cout << "The final array is: ";

    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}