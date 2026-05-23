#include<bits/stdc++.h>
using namespace std; // recursion means calling a function itself.
void f(int i,int n) { // or A function calls itself is called recursion.
    if(i>n) return;
        cout << "Veerendar" << endl;
        f(i+1,n);
}
int main() {
    int n;
    cin >> n;
    f(1,n);
    return 0;
}
/* Recursion Tree for this problem is:- 
    Ex: if n=4, f(1,4) <--> f(2,4) <--> f(3,4) <--> f(4,4) <--> f(5,4),
    each f(i,n) times it prints Veerendar. */
    
/* For this problem
    Time_Complexity(TC):-
    TC --> O(N).
    Space_Complexity(SC):-
    SC --> O(N). */
/* Dry Run:-
    Input: n=3  
    Output: Veerendar
            Veerendar
            Veerendar
            Veerendar
    Explanation: The function is called 4 times (f(1,3) to f(4,3)), and "Veerendar" is printed each time. */