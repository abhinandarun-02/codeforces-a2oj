#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string a[50];
    int n = (s.length() / 2) + 1;
    for (int i = 0, j = 0; j < s.length(); i++, j += 2) {
        a[i] = s[j];
    }

    sort(a, a + n);

    cout << a[0];
    for (int i = 1; i < n; ++i) {
        cout << "+";
        cout << a[i];
    }
    cout << a[n];

    return 0;
}