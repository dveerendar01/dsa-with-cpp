#include<bits/stdc++.h>
using namespace std;

vector<int> missingAndRepeating(vector<int> a) {
    int n = a.size();
    vector<int> hash(n+1, 0);
    for(int i=0; i<n; i++) {
        hash[a[i]]++;
    }
    int repeating = -1, missing = -1;
    for(int i=1; i<=n; i++) {
        if(hash[i] == 2) repeating = i;
        else if(hash[i] == 0) missing = i;

        if(repeating != -1 && missing != -1) {
            break;
        }
    }
    return {repeating, missing};
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if(n<=0) {
        cout << "Array size must be greater than 0." << endl;
        return 0;
    }

    vector<int> a(n);
    cout << "Enter the elements of the array (1 to " << n << "): ";
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i] < 1 || a[i] > n) {
            cout << "Invalid input. Please enter numbers between 1 and " << n << "." << endl;
            return 0;
        }
    }

    vector<int> ans = missingAndRepeating(a);

    cout << "Repeating number: " << ans[0] << endl;
    cout << "Missing number: " << ans[1] << endl;

    cout << "Arrays: ";
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}