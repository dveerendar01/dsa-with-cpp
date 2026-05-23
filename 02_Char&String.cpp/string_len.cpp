#include<bits/stdc++.h>
using namespace std;
int main() {
    string st="Veerendar";
    int len=st.size(); // string size, we call it as string_length
    st[len-1]='Z'; // "Z" it will not work, bcoz string char will enclosed with ' ' (single inverted commos).
    cout<<st[len-1];
    return 0;
}