#include<bits/stdc++.h>
using namespace std;
void print6(int n) {
    for(int i=0; i<n; i++) { // if(rows>n / i>n), stars=2*n-i;
        for(int j=0; j<(n-i-1); j++) {
            cout << " ";  // void function does not returns anything.
        }
        for(int j=0; j<(2*i+1); j++) {
            cout << "*";
        }
        for(int j=0; j<(n-i-1); j++) {
            cout << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    print6(n);
    return 0;
}