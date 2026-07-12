#include<bits/stdc++.h>
using namespace std;
void printchar(int n) {
    for(int i=0; i<n; i++) {
        char ch='A'+i;
        for(char j=0; j<=i; j++) {
            cout << ch << " ";
        }
        cout << "\n"; // endl;
        }
}
int main() {
    int n;
    cin >> n;
    printchar(n);
    return 0;
}