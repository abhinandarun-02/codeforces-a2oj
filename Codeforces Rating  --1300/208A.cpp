#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, cnt = 0;
    string s;
    cin >> s;

    for (i = 0; i < s.length(); i++)
    {

        if (!(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'))
        {
            cout << s[i];
            cnt++;
        }
        else
        {
            i += 2;
            if (cnt > 0)
                cout << " ";
            cnt = 0;
        }
    }

    return 0;
}