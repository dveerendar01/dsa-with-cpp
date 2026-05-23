#include<bits/stdc++.h>
using namespace std;
int lastdigit(int n) {
    return abs(n%10);
}
int main() {
    int n;
    cin >> n;
    cout << lastdigit(n);
    return 0;
}

/* Extraction of digits from a number:
    ex: n=1234, last digit is 4, second last digit is 3, third last digit is 2, fourth last digit is 1.
    we can extract the last digit by n%10, and we can remove the last digit by n/10. */

/* abs() function is used to convert negative number to positive number.
    if n=-1234, then last digit is -4, but we want it to be 4, so we use abs() function. */

