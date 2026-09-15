#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>>& matrix, int n, int m) {
    // int col[m] = {0} --> matrix[0][..]
    // int row[n] = {0} --> matrix[..][0]
    int col0 = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(matrix[i][j] == 0) {
                // mark the i-th row
                matrix[i][0] = 0;
                // mark the j-th col
                if(j != 0) matrix[0][j] = 0;
                else col0 = 0;
            }
        }
    }
    for(int i=1; i<n; i++) {
        for(int j=1; j<m; j++) {
            if(matrix[i][j] != 0) {
                // check for col & row
                if(matrix[0][j] == 0 || matrix[i][0] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    if(matrix[0][0] == 0) {
        for(int j=0; j<m; j++) matrix[0][j] = 0;
    }
    if(col0 == 0) {
        for(int i=0; i<n; i++) {
            matrix[i][0] = 0;
        }
    }
    return matrix;
}

int main() {
    int n,m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of cols: ";
    cin >> m;

    vector<vector<int>> matrix(n,vector<int>(m));

    cout << "Enter matrix elements:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> matrix[i][j];
        }
    }

    matrix = zeroMatrix(matrix, n ,m);
    cout << "Matrix after setting zeroes:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << matrix[i][j];
        }
    }
    cout << "\n";
    return 0;
}