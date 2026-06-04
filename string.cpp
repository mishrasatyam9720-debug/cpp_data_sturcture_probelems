#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.size();
    cout<<s[0]<<" "<<s[l-1];
    s[l-1]='x';
    cout<<"\n"<<s;
}