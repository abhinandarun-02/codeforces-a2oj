#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
            count++;

    cout << ((count > 0) ? "YES" : "NO");

    return 0;
}
