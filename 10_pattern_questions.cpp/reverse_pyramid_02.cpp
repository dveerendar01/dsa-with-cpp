#include<bits/stdc++.h>
using namespace std;
void reverseprint8(int n) {
    for(int i=0; i<n; i++) { 
        for(int j=0; j<i; j++) {
            cout << " ";
        }
        for(int j=0; j<(n-2*i); j++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    reverseprint8(n);
    return 0;
}