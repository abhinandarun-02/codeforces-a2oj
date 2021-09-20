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

/*---------------------------------------------------------------------------------------------------------------------------*/

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