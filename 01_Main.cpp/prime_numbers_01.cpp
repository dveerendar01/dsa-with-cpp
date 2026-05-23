#include<bits/stdc++.h>
using namespace std;
bool isprime(int num) {
    if(num<=1) {
        return false;
    }
    for(int i=2; i*i<=num; i++) {
        if(num%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "Enter a number:";
    cin >> n;
    cout << "Prime numbers up to " << n << " are:\n";
    for(int i=2; i*i<=n; i++) {
        if (isprime(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity: O(n*sqrt(n))
// Space Complexity: O(1)