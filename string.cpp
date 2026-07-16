#include<bits/stdc++.h>
using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int l=s.size();
//     cout<<s[0]<<" "<<s[l-1];
//     s[l-1]='x';
//     cout<<"\n"<<s;
// }
string reverseWords(string s) {

    // String ko words me split karega
    stringstream ss(s);

    vector<string> words;
    string temp;

    // Ek-ek word read karo
    while (ss >> temp) {
        words.push_back(temp);
    }

    string ans = "";

    // Reverse order me answer banao
    for (int i = words.size() - 1; i >= 0; i--) {
        ans += words[i];

        if (i != 0)
            ans += " ";
    }

    return ans;
}

int main() {

    string s = "  hello   world  ";

    cout << reverseWords(s);

    return 0;
}