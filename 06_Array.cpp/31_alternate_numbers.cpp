#include<bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int>& a) {
    vector<int> pos, neg;
    int n = a.size();
    for(int i=0; i<n; i++) {
        if(a[i] > 0) {
            pos.push_back(a[i]);
        } else {
            neg.push_back(a[i]);
        }
    }
    if(pos.size() > neg.size()) {
        for(int i=0; i<neg.size(); i++) {
            a[i*2] = pos[i];
            a[i*2+1] = neg[i];
        }
        int index = neg.size() * 2;
        for(int i = neg.size(); i<pos.size(); i++) {
            a[index] = pos[i];
            index++;
        }
    } else {
        for(int i=0; i<pos.size(); i++) {
            a[i*2] = pos[i];
            a[i*2+1] = neg[i];
        }
        int index = pos.size() * 2;
        for(int i=0; i<neg.size(); i++) {
            a[index] = neg[i];
            index++;
        }
    }
    return a;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if(n <= 0) {
        cout << "Invalid Array size: ";
        return 0;
    }
    vector<int>a(n);
    for(int i=0; i<n; i++) {
        cout << "Enter array elements: ";
        cin >> a[i];
    }
    vector<int> result = alternateNumbers(a);
    cout << "The Alternate Numbers are: ";

    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    } // OR

    // for(int x : result) {
    //     cout << x << " ";
    // }

    cout << endl;
    return 0;
}

// TC : O(N) + min(pos, neg) + O(left elements)
    //  O(0) + O(N/2, N/2) + O(0)
    // O(N/2) + O(N/2)
    // O(N) + O(N)
    // O(2N) done.

// SC : O(N) , because we are using the extra space for pos and neg elements.