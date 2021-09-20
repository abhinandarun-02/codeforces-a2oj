#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, len;
    char s[10000];
    gets(s);
    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        if (s[i] == '.')
            cout << "0";

        if ((s[i] == '-') && (s[i + 1] == '.'))
        {
            cout << "1";
            i++;
        }

        if ((s[i] == '-') && (s[i + 1] == '-'))

        {
            cout << "2";
            i++;
        }
    }
    cout << endl;
}