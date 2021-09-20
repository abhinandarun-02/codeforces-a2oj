#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    string key = "hello";
    cin >> s;
    int j = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == key[j])
        {
            j++;
        }
    }

    if (j == key.length())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}