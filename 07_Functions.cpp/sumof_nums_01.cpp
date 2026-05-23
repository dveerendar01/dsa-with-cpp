#include<bits/stdc++.h>
using namespace std;
int sum(int num1, int num2) {
    int num3 = num1+num2;
    return num3;
}
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int result = sum(num1, num2);
    cout << "num1:" << num1 << endl << "num2:" << num2 << endl; 
    cout << "result:" << result;
    return 0;
}
