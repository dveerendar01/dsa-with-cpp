#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target) {
    map<int, int> mpp;
    for(int i=0; i<n; i++) {
        int a = book[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()) {
            return "YES";
        }
        mpp[a] = i;
    }
    return "NO";
}

int main() {
    int n, target;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> book(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> book[i];
    }
    cout << "Enter target sum: ";
    cin >> target;
    cout << read(n, book, target) << endl;
    return 0;
}