#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int tp = ((k * l) / nl) / n;
    int lp = (d * c) / n;
    int sp = (p / np) / n;

    cout << min({tp, lp, sp});

    return 0;
}