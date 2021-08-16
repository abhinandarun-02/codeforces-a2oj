#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    int a, b;
    for (int i = 0; i * i <= n; i++) {
        b = n - i * i;
        if (b * b + i == m) count++;
    }
    cout << count;
    return 0;
}