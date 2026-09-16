#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>>& mat) {
    int n = mat.size();
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            swap(mat[i][j], mat[j][i]);
        }
    }
    for(int i=0; i<n; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main() {
    int n;
    cout << "Enter number of rows:\n";
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));
    cout << "Enter Matrix Elements:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }

    rotateMatrix(mat);
    cout << "Matrix after the rotation is:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << mat[i][j] << " ";
        }
    }
    cout << endl;
    return 0;
}