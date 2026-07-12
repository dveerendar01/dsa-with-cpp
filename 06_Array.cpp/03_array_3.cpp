#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[5];
    for(int i=0; i<=4; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<=4; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
/* Space Complexity(SC): Brg-oh (or) Brg-O (or) O().
    1) Auxilary space, the space that u take to solve the problem. ex:c
    2) Input space, the space that u take to store the input. ex:a+b
    Space Complexity = Auxilary space + Input space.
    if c=a+b; then SC= O(3). */
/* Time Complexity(TC): Brg-oh (or) Brg-O (or) O().
    Most of the survers takes,
    1 second = 10^8 operations runs
    N seconds = N*10^8 operations runs.
    TC(1sec) = O(10^8)
    TC(N sec) = O(N * 10^8). */