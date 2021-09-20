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
#define deb(x) cerr << #x << " " << x << endl;
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