#include<bits/stdc++.h>
using namespace std;
void f(int i, int n, vector<int>& a) {
    if(i>=(n/2)) return;
    swap(a[i],a[n-i-1]);
    f(i+1, n, a);
}
int main() {
    int n;
    cout << "Enter a value to proceed: ";
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    } 
    f(0, n, a);
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}