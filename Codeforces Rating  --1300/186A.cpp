#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define endl "\n"
#define el cout << "\n"
#define deb(x) cout << #x << " " << x << endl;
using namespace std;

void solve()
{

    string s1, s2;
    cin >> s1 >> s2;
    int n = max(s1.length(), s2.length());

    if (s1.length() != s2.length())
    {
        cout << "NO";
        return;
    }
    else
    {
        int count(0), same(0);
        char c1, c2;
        bool ans = false;

        fo(i, n)
        {
            if (s1[i] != s2[i])
            {
                count++;

                if (count == 1)
                {
                    c1 = s1[i];
                    c2 = s2[i];
                }

                if (count == 2)
                {
                    if (s2[i] == c1 && s1[i] == c2)
                        ans = true;
                }
            }
        }
        // deb(c1)
        // deb(res)

        if (ans == true && count == 2)
            cout << "YES";
        else
            cout << "NO";
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("Files/Error.txt", "w", stderr);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    tc = 1;
    //cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        //cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

 