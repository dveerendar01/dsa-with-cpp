#include<bits/stdc++.h>
using namespace std;
void f(int l, int r, vector<int>& a) {
    if(l>=r) return;
    swap(a[l], a[r]);  // TRUE =  1; or 1 means True.
    f(l+1, r-1, a);    // FALSE = 0; or 0 means False.
}
int main() {
    int n;
    cout << "Enter a number to proceed: ";
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    f(0, n-1, a);
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
