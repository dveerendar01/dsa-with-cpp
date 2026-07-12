#include<bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cin>>age;
    if(age>=18) {
        cout<<"You are an adult!";
    }
    else if(age<18) {
        cout<<"You are teen! or You are not an adult!";
    }
    return 0; // return 0; exicutes the program successfully.
}