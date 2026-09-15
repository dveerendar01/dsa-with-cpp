#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>>& matrix,int n,int m){
    vector<int> col(m,0);
    vector<int> row(n,0);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]||col[j]){
                matrix[i][j]=0;
            }
        }
    }

    return matrix;
}

int main(){
    int n,m;

    cout<<"Enter number of rows: ";
    cin>>n;

    cout<<"Enter number of columns: ";
    cin>>m;

    vector<vector<int>> matrix(n,vector<int>(m));

    cout<<"Enter matrix elements:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    matrix=zeroMatrix(matrix,n,m);

    cout<<"Matrix after setting zeroes:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

// TC : O(2*n*m)
// SC : O(n) + O(m)