#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int>& A, vector<int>& B) {
    int i=0;
    int j=0;
    vector<int> answ;

    while(i < A.size() && j < B.size()) {
        if(A[i] < B[j]) {
            i++;
        } else if(B[j] < A[i]) {
            j++;
        } else {
            answ.push_back(A[i]);
            i++;
            j++;
        }
    }
    return answ;
}

int main() {
    int n, m;
    cout << "Enter A array size: ";
    cin >> n;
    cout << "Enter B array size: ";
    cin >> m;

    if(n<=0 || m<=0) {
        cout << "Invalid Array";
        return 0;
    }

    vector<int> A(n), B(m);
    cout << "Enter A array elements: ";
    for(int i=0; i<n; i++) {
        cin >> A[i];
    }
    cout << "Enter B array elements: ";
    for(int j=0; j<m; j++) {
        cin >> B[j];
    }

    vector<int> result = findArrayIntersection(A, B);
    cout << "This Intersection of the array is: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}