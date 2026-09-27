#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>>& arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;

    for(int i=0;i<n;i++){
        if(ans.empty()||arr[i][0]>ans.back()[1]){
            ans.push_back(arr[i]);
        }
        else{
            ans.back()[1]=max(ans.back()[1],arr[i][1]);
        }
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    if(n<=0){
        cout<<"Array size is Invalid";
        return 0;
    }

    vector<vector<int>> arr(n,vector<int>(2));
    cout<<"Enter array elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }

    vector<vector<int>> result=mergeOverlappingIntervals(arr);
    cout<<"Merged intervals: ";
    for(int i=0;i<result.size();i++){
        cout<<"[ ";
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"] ";
    }
    cout<<endl;
    return 0;
}