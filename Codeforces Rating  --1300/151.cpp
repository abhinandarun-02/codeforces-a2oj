#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (i = 0; i < n; i++)
#define ll long long
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define nline "\n"
#define el cout << "\n"

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // int total = k * l;
    int tp = ((k * l) / nl) / n;
    int lp = (d * c) / n;
    int sp = (p / np) / n;
    cout << min({tp, lp, sp});

    return 0;
}