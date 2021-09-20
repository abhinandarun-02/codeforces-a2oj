#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int c, cnt(0);
    float k;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            c = (i * i) + (j * j);
            k = sqrt(c);
            if (k * k == c && k <= n)
                cnt++;
        }
    }

    cout << cnt;
}

int main()
{
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