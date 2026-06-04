#include <iostream>
#include <string>

using namespace std;

void alphabet_hashing (string s ,int q) {

    int hash[26]={0};
    int i;
    for (i=0; i<s.size();i++){
        hash[s[i]-'a']++;

    }
    
    while(q--){
        char c;
        cin>>c;

        cout<<hash[c-'a']<<endl;
    }
}
 

int main (){
    string s;
    int q;
    cin >> s;
    cin >> q;
    alphabet_hashing(s,q);
}
