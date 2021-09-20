#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define fo(i, n) for (ll i = 0; i < n; i++)
#define ll long long
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define endl "\n"
#define el cout << "\n"
#define deb(x) cerr << #x << " " << x << endl;
using namespace std;

/*---------------------------------------------------------------------------------------------------------------------------*/

void solve()
{

    ll y, k, n, val;
    bool flag = 0;
    cin >> y >> k >> n;

    ll x = k - y % k;

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll tc;
    tc = 1;
    //cin >> tc;

    for (ll i = 1; i <= tc; i++)
    {
        //cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

 