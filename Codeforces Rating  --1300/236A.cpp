#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char>letters;
    for (int i = 0; i < s.length(); i++) {
        letters.insert(s[i]);
    }

    int l = letters.size();
    cout << ((l % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");

    return 0;
}