#include <bits/stdc++.h>
using namespace std;

bool f(int i, string & s) { // ' bool ' is used to return true or false, and ' & ' is used to avoid copying the string.
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    return f(i + 1, s);
}
int main() {
    string s;
    cin >> s;
    cout << (f(0, s) ? "Palindrome" : "Not Palindrome"); // ( (condition) ? if true : if false );
    return 0; 
}
