#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);

    for(int col=1; col<row; col++) {
        ans = ans * (row-col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalsTriangle(int N) {
    vector<vector<int>> ans;
    for(int i=1; i<=N; i++) {
        vector<int> ansRow = generateRow(i);
        ans.push_back(ansRow);
    }
    return ans;
}

int main() {
    int N;
    cout << "Enter number of rows: ";
    cin >> N;

    vector<vector<int>> ans = pascalsTriangle(N);
    cout << "Pascal's Triangle:\n";
    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// TC: O(N^2)
// SC: O(N^2)