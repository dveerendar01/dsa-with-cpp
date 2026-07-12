#include<bits/stdc++.h>
using namespace std;
void fib(int n) {
    int a=0, b=1, count=0, c;
    while(count<n) {
        cout << a << " ";
        count++;
        c=a+b;
        a=b;
        b=c;
    }
}
int main() {
    int n;
    cin >> n;
    fib(n);
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)