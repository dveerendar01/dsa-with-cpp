#include<bits/stdc++.h>
using namespace std;
void printNum(int n) {
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=i; j++) {
            cout << n;
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    printNum(n);
    return 0;
}