#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplets(int n, vector<int> nums) {
    set<vector<int>> st;

    for(int i=0; i<n; i++) {
        set<int> hashset;
        for(int j=i+1; j<n; j++) {
            int third = -(nums[i] + nums[j]);
            if(hashset.find(third) != hashset.end()) {
                vector<int> temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if(n<=0) {
        cout << "Array size is invalid";
        return 0;
    }

    vector<int>nums(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> ans = triplets(n, nums);
    cout << "The triplates are: ";
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

// TC: O(N^2) * log(M)
// SC: O(N) + O(no. of unique triplates) * 2