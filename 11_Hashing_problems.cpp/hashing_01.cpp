#include<bits/stdc++.h>
using namespace std;
int f(int number, int a[], int n) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == number)
            cnt++;
    }
    return cnt; // Hashing:- actually means (pre-storing)/(fetching).
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int number;
    cin >> number;
    cout << f(number, a, n);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)