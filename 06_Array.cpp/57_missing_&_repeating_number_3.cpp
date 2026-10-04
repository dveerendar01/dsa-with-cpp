#include<bits/stdc++.h>
using namespace std;
vector<int> findMissingRepeatingNumbers(vector<int> a){
    int n=a.size();
    int xr=0;
    for(int i=0;i<n;i++){
        xr=xr^a[i];
        xr=xr^(i+1);
    }

    int number=xr&~(xr-1);
    int zero=0,one=0;
    for(int i=0;i<n;i++){
        if((a[i]&number)!=0) one=one^a[i];
        else zero=zero^a[i];
    }

    for(int i=1;i<=n;i++){
        if((i&number)!=0) one=one^i;
        else zero=zero^i;
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==zero) cnt++;
    }
    if(cnt==2) return {zero,one};
    return {one,zero};
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    if(n<=0){
        cout<<"Array size must be greater than 0."<<endl;
        return 0;
    }

    vector<int> a(n);
    cout<<"Enter the elements of the array (1 to "<<n<<"): ";
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<1||a[i]>n){
            cout<<"Invalid input. Please enter numbers between 1 and "<<n<<"."<<endl;
            return 0;
        }
    }

    vector<int> ans=findMissingRepeatingNumbers(a);
    cout<<"\nRepeating number: "<<ans[0]<<endl;
    cout<<"Missing number: "<<ans[1]<<endl;
    cout<<"Array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}

// TC: O(n)
// SC: O(1)