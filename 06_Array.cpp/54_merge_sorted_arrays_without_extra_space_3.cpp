#include<bits/stdc++.h>
using namespace std;

void swapIfGreater(long long arr1[],long long arr2[],int ind1,int ind2){
    if(arr1[ind1]>arr2[ind2]){
        swap(arr1[ind1],arr2[ind2]);
    }
}

void merge(long long arr1[],long long arr2[],int n,int m){
    int len=n+m;
    int gap=(len/2)+(len%2);
    
    while(gap>0){
        int left=0;
        int right=left+gap;
        while(right<len){
            if(left<n&&right>=n){
                swapIfGreater(arr1,arr2,left,right-n);
            }
            else if(left>=n){
                swapIfGreater(arr2,arr2,left-n,right-n);
            }
            else{
                swapIfGreater(arr1,arr1,left,right);
            }
            left++;
            right++;
        }
        if(gap==1) break;
        gap=(gap/2)+(gap%2);
    }
}

int main(){
    int n,m;
    cout<<"Enter n value: ";
    cin>>n;
    cout<<"Enter m value: ";
    cin>>m;

    if(n<=0||m<=0){
        cout<<"Invalid array size";
        return 0;
    }

    vector<long long> arr1(n);
    vector<long long> arr2(m);

    cout<<"Enter arr1 elements: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"Enter arr2 elements: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    merge(arr1.data(),arr2.data(),n,m);

    cout<<"The final result of arr1 is: ";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }

    cout<<endl;

    cout<<"The final result of arr2 is: ";
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }

    cout<<endl;
    return 0;
}