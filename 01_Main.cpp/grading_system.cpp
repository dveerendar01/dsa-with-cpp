#include<bits/stdc++.h>
using namespace std;
int main() {
    int Marks;
    cin >> Marks;
    if(Marks<35) {
        cout << "Fail!";
    }
    else if(Marks>=35 && Marks<=50) {
        cout << "E GRADE";
    }
    else if(Marks>=51 && Marks<=60) {
        cout << "D GRADE";
    }
    else if(Marks>=61 && Marks<=70) {
        cout << "C GRADE";
    }
    else if(Marks>=71 && Marks<=80) {
        cout << "B GRADE";
    }
    else if(Marks>=81 && Marks<=90) {
        cout << "A GRADE";
    }
    else if(Marks>=91 && Marks<=100) {
        cout << "O GRADE";
    }
    else {
        cout << "Invalid! or Error!";
    }
    return 0;
}

/* Grading system:
    Marks < 35 --> Fail
    35 >= Marks <= 50 --> E GRADE
    51 >= Marks <= 60 --> D GRADE
    61 >= Marks <= 70 --> C GRADE
    71 >= Marks <= 80 --> B GRADE
    81 >= Marks <= 90 --> A GRADE
    91 >= Marks <= 100 --> O GRADE
    Marks > 100 --> Invalid! or Error! */

/* Time complexity is:
    O(1).
Space complexity is also O(1). */

