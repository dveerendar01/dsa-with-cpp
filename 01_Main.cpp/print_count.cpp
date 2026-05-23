#include<bits/stdc++.h>
using namespace std;
int count(int n) {
    int count=0;
    while(n>0) {
        count=count+1;
        n=n/10;
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    cout << count(n);
    return 0;
}