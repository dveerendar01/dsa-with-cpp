#include<bits/stdc++.h>
using namespace std;
int cnt(int n){
    int cnt=(int)(log(n)+1);
    return cnt;
}
int main() {
    int n;
    cin >> n;
    cout << cnt(n);
    return 0;
}

/* Count number of digits in a number.
    Input: n=12345
    Output: 5 */