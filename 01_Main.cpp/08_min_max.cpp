#include<bits/stdc++.h>
using namespace std;
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int minimum = min(num1, num2);
    int maximum = max(num1, num2);
    cout << "minimum:" << " " << minimum << endl;
    cout << "maximum:" << " " << maximum << endl;
    return 0;
}

/* Find minimum and maximum between two numbers.
    Input: num1=10, num2=20
    Output: minimum=10, maximum=20 */