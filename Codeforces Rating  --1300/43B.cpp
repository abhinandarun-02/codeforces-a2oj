#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int n1 = s1.length(), n2 = s2.length();
    int count[10000];

    for (int i = 0; i < n1; i++)
        count[s1[i]]++;

    for (int i = 0; i < n2; i++)
    {
        if (s2[i] == 32)
            continue;
        if (count[s2[i]] == 0)
        {
            cout << "NO";
            return;
        }
        else
        {
            count[s2[i]]--;
        }
    }
    cout << "YES";
}

int main()
{
    int tc;
    tc = 1;

    for (int i = 1; i <= tc; i++)
    {
        solve();
    }

    return 0;
}