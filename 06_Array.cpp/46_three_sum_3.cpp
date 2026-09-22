#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplets(int n, vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for(int i=0; i<n; i++) {
        if(i>0 && nums[i] == nums[i-1]) continue;
        int j = i+1;
        int k = n-1;
        while(j<k) {
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0) {
                j++;
            } else if(sum > 0) {
                k--;
            } else {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j] == nums[j-1]) j++;
                while(j<k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if(n<=0) {
        cout << "Array size is Invalid";
        return 0;
    }

    vector<int> nums(n);
    cout << "Enter array elements: " << "\n";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> ans = triplets(n, nums);
    cout << "The triplets is: ";
    for(int i=0; i<ans.size(); i++) {
        cout << "[ ";
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "] ";
    }
    cout << endl;
    return 0;
}

// TC: O(n log n) + O(N * n)
// SC: O(no. of unique triplets)