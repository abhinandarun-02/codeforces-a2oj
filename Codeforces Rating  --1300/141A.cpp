#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n_c, n_ab;
    string a, b, c, ab;

    cin >> a;
    cin >> b;
    cin >> c;

    ab = a + b;
    n_ab = ab.length();
    n_c = c.length();

    sort(ab.begin(), ab.end());
    sort(c.begin(), c.end());

    cout << ((ab == c) ? "YES" : "NO");

    return 0;
}