#include<bits/stdc++.h>
using namespace std;
void printchar(int n) {
    for(int i=0; i<n; i++) {
        for(char ch='A'; ch<='A'+(n-i-1); ch++) {
            cout << ch << " ";
        }
        cout << "\n";
    }
}
int main() {
    int n;
    cin >> n;
    printchar(n);
    return 0;
}