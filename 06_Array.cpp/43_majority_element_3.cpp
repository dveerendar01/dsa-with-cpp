#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int cnt = 0;
    int element = 0;
    for(int i=0; i<nums.size(); i++) {
        if(cnt == 0) {
            cnt = 1;
            element = nums[i];
        } else if(element == nums[i]) {
            cnt++;
        } else {
            cnt--;
        }
    }
    return element;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if(n<=0) {
        cout << "Invalid Array Size";
        return 0;
    }

    vector<int> nums(n);
    cout << "Enter elements of array: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    int result = majorityElement(nums);
    cout << "The final result is: " << result << endl;
    return 0;
}