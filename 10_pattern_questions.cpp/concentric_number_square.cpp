#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int down = size - 1 - i;
            cout << (n - min({top, left, right, down}));
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}