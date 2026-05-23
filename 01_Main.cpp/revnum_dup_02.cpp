#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int revnum = 0;
    int dup = n;
    while(n>0) {
        int id = n%10;
        revnum = (revnum*10+id);
        n=n/10; 
    }
    if(dup==revnum) cout << "True";
    else cout << "False";
    return 0;
}