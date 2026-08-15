#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int largest = arr[0];
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int answer = largestElement(arr);
    cout << "Largest element = " << answer << endl;
    return 0;
}