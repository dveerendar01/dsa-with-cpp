#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& arr, int target) {
    int n = arr.size();
    set<vector<int>> st;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            set<long long> hashset;
            for(int k=j+1; k<n; k++) {
                long long sum = arr[i] + arr[j];
                sum += arr[k];
                long long fourth = target - (sum);
                if(hashset.find(fourth) != hashset.end()) {
                    vector<int> temp = {arr[i], arr[j], arr[k], (int)fourth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(arr[k]);
            }
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
        cout << "Array size is Invalid";
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target value: ";
    cin >> target; 

    vector<vector<int>> ans = fourSum(arr, target);
    cout << "The Four Sum are: ";
    for(int i=0; i<ans.size(); i++) {
        cout << "[ ";
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}

// TC: O(N^3 log N)
// SC: O(N)