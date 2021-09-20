#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define nline "\n"
#define el cout << "\n"

int main()
{

    int n, m;
    cin >> n >> m;

    char arr[n][m];

    int i, j;
    fo(i, n)
    {
        fo(j, m)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '.')
            {
                if ((i + 1) % 2 != 0)
                {
                    if ((j + 1) % 2 != 0)
                        arr[i][j] = 'B';
                    else
                        arr[i][j] = 'W';
                }
                else
                {
                    if ((j + 1) % 2 != 0)
                        arr[i][j] = 'W';
                    else
                        arr[i][j] = 'B';
                }
            }
        }
    }

    fo(i, n)
    {
        fo(j, m)
        {
            cout << arr[i][j];
        }
        el;
    }

    return 0;
}