#include<bits/stdc++.h>
using namespace std;

vector<int> spiralTraversal(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();

    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;

    vector<int> ans;

    while(top <= bottom && left <= right) {
        // Left to Right
        for(int j=left; j<=right; j++) {
            ans.push_back(mat[top][j]);
        }
        top++;

        // Top to Bottom
        for(int i=top; i<=bottom; i++) {
            ans.push_back(mat[i][right]);
        }
        right--;

        // Right to Left
        if(top <= bottom) {
            for(int j=right; j>=left; j--) {
                ans.push_back(mat[bottom][j]);
            }
            bottom--;
        }

        // Bottom to Top
        if(left <= right) {
            for(int i=bottom; i>=top; i--) {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main() {
    int n,m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of cols: ";
    cin >> m;

    vector<vector<int>> mat(n,vector<int>(m));
    cout << "Enter Matrix Elements:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> mat[i][j];
        }
    }

    vector<int> ans = spiralTraversal(mat);
    cout << "Spiral Traversal:\n";
    for(int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

// TC : O(n*m) ,bcuz we r using a matrix.
// SC : O(n*m) ,bcuz we r storing an extra space of ans as matrix.