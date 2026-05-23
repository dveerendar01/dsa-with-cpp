#include<bits/stdc++.h>
using namespace std;
void printCharPyramid(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        char ch='A';
        int breakpoint = (2*i+1);
        for(int j=0; j<breakpoint; j++) {
            cout << ch;
            if(j < i) ch++;
            else ch--;
            }
        cout << endl;
    }
}
int main() {
    int n;  // or int t;
    cin >> n; // or cin >> t;
    printCharPyramid(n);
    return 0;
}
