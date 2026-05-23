#include<bits/stdc++.h>
using namespace std;
int main() {
    for(int i=0; i<4; i++) { // this is outerloop, it connects no. of lines/rows.
        for(int j=0; j<4; j++) { // this is innerloop, it connects no. of columns.
            cout << "* "; // must print star in innerloop
        }
        cout << endl; // must give newline in outerloop
    }
    return 0;
}
/* To flip any number:
    1) n
    2) m
    if n=1,
    m= ? --> flip to n, we get m.
    m=1-n, ex: m=1-1=0, --> m=0.
    EX: if start=1,
    start=1-start,
    start=1-1
    start=0.  */