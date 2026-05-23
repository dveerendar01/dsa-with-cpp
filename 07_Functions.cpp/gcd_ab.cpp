#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while(a>0 && b>0) {
        if(a>b) {
            a=a%b;
        } else {
            b=b%a;
        }
    }
    return (a==0) ? b:a;
}
int main() {
    int a,b;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter b value: ";
    cin >> b;
    int result=gcd(a,b);
    cout << "GCD is: " << result << endl;
    return 0;
}
