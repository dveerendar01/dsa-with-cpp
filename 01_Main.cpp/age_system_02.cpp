#include<bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cin >> age;
    if(age<18) {
        cout << "Not eligible for job!";
    }
    else if(age>=18 && age<=54) {
        cout << "Eligible for job!";
    }
    else if(age>=55 && age<=57) {
        cout << "Eligible for job,but retairement soon!";
    }
    else if(age>57) {
        cout << "retairment time!";
    }
    else {
        cout << "Error!";
    }
    return 0;
}

