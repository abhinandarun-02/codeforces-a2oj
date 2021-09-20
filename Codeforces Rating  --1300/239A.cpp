#include <bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------------------------------------------------------------------*/

void solve()
{

    long long y, k, n, val;
    bool flag = 0;
    cin >> y >> k >> n;

    long long x = k - y % k;

    for (int i = x; i <= n - y; i += k)
    {
        flag = 1;
        cout << i << " ";
    }

    if (!flag)
        cout << -1;
}

int main()
{

    long long tc;
    tc = 1;
    //cin >> tc;

    for (long long i = 1; i <= tc; i++)
    {
        //cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}