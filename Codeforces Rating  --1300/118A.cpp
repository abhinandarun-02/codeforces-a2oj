#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        if (str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117 || str[i] == 121)
            ;
        else
            cout << "." << str[i];
    }

    return 0;
}