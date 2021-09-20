#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, val = 0;
    string s;

    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s[1] == '+')
            val++;
        else
            val--;
    }
    cout << val;
    return 0;
}