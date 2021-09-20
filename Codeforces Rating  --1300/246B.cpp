#include <bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------------------------------------------------------------------*/

void solve()
{

    int n, num, sum(0);
    cin >> n;

    while (cin >> num)
        sum += num;

    cout << ((sum % n) ? n - 1 : n);
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