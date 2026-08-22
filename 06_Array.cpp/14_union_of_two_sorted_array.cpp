#include<bits/stdc++.h>
using namespace std;

vector<int> sortedArray(const vector<int>& arr1, const vector<int>& arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();

    set<int> st;
    for(int i=0; i<n1; i++) {
        st.insert(arr1[i]);
    }
    for(int i=0; i<n2; i++) {
        st.insert(arr2[i]);
    }
    vector<int> answ;
    for(auto it : st) {
        answ.push_back(it);
    }
    return answ;
}

int main() {
    int n1, n2;
    cout << "Enter arr1 size: ";
    cin >> n1;
    cout << "Enter arr2 size: ";
    cin >> n2;

    if(n1 < 0 || n2 < 0) {
        cout << "Invalid array size: ";
        return 0;
    }

    vector<int> arr1(n1), arr2(n2);

    cout << "Enter array1 elements: ";
    for(int i=0; i<n1; i++) {
        cin >> arr1[i];
    }
    
    cout << "Enter array2 elements: ";
    for(int i=0; i<n2; i++) {
        cin >> arr2[i];
    }
    vector<int> result = sortedArray(arr1, arr2);
    cout << "The Union of the arrays is: ";
    
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}