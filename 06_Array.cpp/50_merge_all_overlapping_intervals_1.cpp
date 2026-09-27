#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>>& arr) {
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++) {
        int start = arr[i][0];
        int end = arr[i][1];
        if(!ans.empty() && end <= ans.back()[1]) {
            continue;
        }
        for(int j=i+1; j<n; j++) {
            if(arr[j][0] <= end) {
                end = max(end, arr[j][1]);
            }
            else {
                break;
            }
        }
        ans.push_back({start, end});
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

    vector<vector<int>> arr(n, vector<int>(2));
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    vector<vector<int>> result = mergeOverlappingIntervals(arr);
    for(int i=0; i<result.size(); i++) {
        cout << "[ ";
        for(int j=0; j<result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << "] ";
    }
    cout << endl;
    return 0;
}

// TC : O(N log N) + O(2N)
// SC : O(N)