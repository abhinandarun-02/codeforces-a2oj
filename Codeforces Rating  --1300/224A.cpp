#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y, z;
    cin >> a >> b >> c;

    x = sqrt(a * c / b);
    y = sqrt(a * b / c);
    z = sqrt(b * c / a);

    cout << 4 * (x + y + z);
    return 0;
}