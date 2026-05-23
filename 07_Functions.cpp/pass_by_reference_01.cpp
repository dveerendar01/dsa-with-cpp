#include<bits/stdc++.h>
using namespace std;
void dosomething(string & st) {
    st="Veerendar";      // pass_by_reference --
    cout << st << endl; // -- it sends the original given value in the function.
}
int main() {
    string st="rathod";
    dosomething(st);
    cout << st;
    return 0;
}
/* both (pass_by_value) & (pass_by_reference) are same but the void is different,
ex: void dosomethig(string st) {
    } ,this is for (pass_by_value). 
ex: void dosomethig(string & st) {
    } ,this is for (pass_by_reference). */
// for array make sure that ' & ' (pass_by_reference) for better.