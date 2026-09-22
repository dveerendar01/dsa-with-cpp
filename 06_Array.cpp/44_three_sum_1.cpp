#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplates(vector<int>& arr) {
    int n = arr.size();
    set<vector<int>> st;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                if(arr[i]+arr[j]+arr[k] == 0) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
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

    vector<vector<int>> ans = triplates(arr);
    cout << "The Triplates are: ";
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