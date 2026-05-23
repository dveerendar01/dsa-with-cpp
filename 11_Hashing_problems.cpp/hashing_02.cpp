#include<bits/stdc++.h>
using namespace std;
int countChar(string s, char c) {
    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == c)
            cnt++;
    }
    return cnt;
}
int main() {
    string s;
    char c;
    cout << "Enter string: ";
    cin >> s;
    cout << "Enter character to count: ";
    cin >> c;
    cout << "Count: " << countChar(s, c);
    return 0;
}
