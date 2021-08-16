#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, str2;
    cin >> str;
    cin >> str2;

    reverse(str.begin(), str.end());

    if (str == str2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}