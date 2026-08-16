#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int secondLargestElement(vector<int> &arr, int n) {
        int largest = arr[0];
        int sLargest = INT_MIN;

        for(int i=1; i<n; i++) {
            if(arr[i] > largest) {
                sLargest = largest;
                largest = arr[i];
            } else if(arr[i] < largest && arr[i] > sLargest) {
                sLargest = arr[i];
            }
        }
        return sLargest;
    }
};

int main() {
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    Solution obj;
    int result = obj.secondLargestElement(arr, n);
    cout << "Second Largest Element in the Array is: " << result << endl;

    return 0;
}
