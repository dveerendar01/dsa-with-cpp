#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter b value: ";
    cin >> b;
    while(a>0 && b>0) {
        if(a>b) {
            a=a%b;
        } else {
            b=b%a;
        }
    }
    if(a==0) {
        cout << "GCD is: " << b << endl; // GCD (Greatest Common Divisior). 
        } else {
        cout <<  "GCD is: " << a << endl;
        }
    return 0;
}
/* gcd(N1,N2)=gcd(N1-N2,N2) & (N1>N2).
    gcd(a,b)=gcd(a-b,b) & (a>b).
    gcd(a,b)=gcd(a-b,b) --> gcd(0,b), here b is gcd number.
    gcd(a,b)=gcd(a%b,b) & (a>b), Therefore (greater % smaller): if one of them is zero, the others is gcd. */
/* Time complexity is:
    O(log(min(a,b))). */

