#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate = 0;
    int cnt = 0;

    for(int num : nums) {

        if(cnt == 0) {
            candidate = num;
        }

        if(num == candidate) {
            cnt++;
        } else {
            cnt--;
        }
    }

    return candidate;
}

int main() {

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int answer = majorityElement(nums);

    cout << "Majority Element: " << answer << endl;

    return 0;
}