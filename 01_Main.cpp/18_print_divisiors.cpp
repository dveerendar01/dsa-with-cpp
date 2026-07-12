#include<bits/stdc++.h>
using namespace std;
void printDivisiors(int n) {
    for(int i=1; i<=n; i++) {
        if(n%i==0) {
            cout << i << " ";
        }
    }
}
int main() {
    int n;
    cin >> n;
    printDivisiors(n);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)