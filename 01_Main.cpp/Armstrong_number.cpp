#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int dup = n;
    int sum = 0;
    while(n > 0) {
        int lastdigit = n % 10;
        sum = sum + (lastdigit*lastdigit*lastdigit); // division of any number can be (1 to n itself).
        n=n/10;
    }
    if(sum==dup) {
        cout << "True" << endl << "It is an Armstrong number";
    }
    else {
        cout << "False" << endl << "It is not an Armstrong number";
    }
    return 0;
}
/* Armstrong number:
    if n=371, --> 3^3+7^3+1^3 = 371, this type of numbers are Armstrong numbers.
    if n=1634, --> 1^3+6^3+3^3+4^3 = 31,744, so it is not a Armstrong number.
    if n=35, --> 3^3+5^3 = 134, it is not an Armstrong number. */
/* palindrome number means the reverse is exactly same as the original,
    ex: 343 , in reverse it is 343 only
    ex: 121, in reverse it is 121 as it is, this type of numbers is called palindromes. */

/* Perfect number means the sum of all the factors of a number is equal to the number itself.
    ex: 6 --> factors are 1,2,3,6 --> 1+2+3=6, so it is a perfect number.
    ex: 28 --> factors are 1,2,4,7,14,28 --> 1+2+4+7+14=28, so it is a perfect number. */

