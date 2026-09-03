#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target) {
    int left = 0;
    int right = n-1;
    sort(book.begin(), book.end());
    while(left < right) {
        int sum = book[left] + book[right];
        if(sum == target) {
            return "YES";
        }
        else if(sum < target) left++;
        else right--;
    }
    return "NO";
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    if(n < 2 ) {
        cout << "Array must contains at least 2 elements.\n";
        return 0;
    }
    vector<int> book(n);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        cin >> book[i];
    }
    cout << "Enter the target sum: ";
    cin >> target;
    string result = read(n, book, target);
    cout << result << "\n";
    return 0;
}