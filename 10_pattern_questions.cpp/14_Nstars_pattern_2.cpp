#include<bits/stdc++.h>
using namespace std;
void print3(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    print3(n);
    return 0;
}
/* Concept for printing any pattern:
    1) for the outerloop, connect the no. of lines/rows.
    2) for the innerloop, connect the no. of columns.
    3) print them ("*")/(no's) inside the innerloop/inner for_loop.
    4) give newline (endl;)/("\n";) in outerloop/outer for_loop.
    5) observe symmetry [optional]. */
