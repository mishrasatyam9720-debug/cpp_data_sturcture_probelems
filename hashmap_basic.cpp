#include<iostream>
using namespace std;

void hashmap(string s, int q)
{
    int hash[10] = {0};

    for(int i=0; i<s.size(); i++)
    {
        hash[s[i] - '0']++;
    }

    while(q--)
    {
        int num;
        cout << "Enter digit: ";
        cin >> num;

        cout << hash[num] << endl;
    }
}

int main()
{
    string s;
    cout << "Enter a number: ";
    cin >> s;

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    hashmap(s, q);

    return 0;
}