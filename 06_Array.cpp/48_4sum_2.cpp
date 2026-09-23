#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(int target, vector<int> nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for(int i=0; i<n; i++) {
        if(i>0 && nums[i] == nums[i-1]) continue;
        for(int j=i+1; j<n; j++) {
            if(j != i+1 && nums[j] == nums[j-1]) continue;
            int k = j+1;
            int l = n-1;
            while(k < l) {
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                sum += nums[l];
                if(sum == target) {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k < l && nums[k] == nums[k-1]) k++;
                    while(k < l && nums[l] == nums[l+1]) l--;
                }
                else if(sum < target) k++;
                else l--;
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
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target value: ";
    cin >> target;

    vector<vector<int>> ans = fourSum(target, nums);
    cout << "The quadruplets are: ";
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

// TC: O(N^3)
// SC: O(1)