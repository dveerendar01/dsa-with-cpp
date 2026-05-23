#include<bits/stdc++.h>
using namespace std; // pass by value function.
void dosomething(int num) {
    cout << num << endl; // pass_by_value sends the copy of a given value for the function.
    num+=5;
    cout << num << endl;
    num+=5;
    cout << num << endl;
}
int main() {
        int num = 10;
        dosomething(num);
        cout << num << endl;
    return 0;
}
/* both (pass_by_value) & (pass_by_reference) are same but the void is different,
ex: void dosomethig(string st) {
    } ,this is for (pass_by_value). 
ex: void dosomethig(string & st) {
    } ,this is for (pass_by_reference). */