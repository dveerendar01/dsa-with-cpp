#include<bits/stdc++.h>
using namespace std;
void print5(int n) { // (int n) or (int j), any [alphbet] we can use, for unknow values.
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << i;
        }
        cout << "\n";
    }
}
int main() {
    int n;
    cin >> n;
    print5(n);
    return 0; 
}