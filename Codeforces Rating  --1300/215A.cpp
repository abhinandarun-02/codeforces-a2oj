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

    int i, j, q, maxv = 0, cnt = 1;

    int a;
    cin >> a;
    int arr1[a];
    fo(i, a) cin >> arr1[i];

    int b;
    cin >> b;
    int arr2[b];
    fo(i, b) cin >> arr2[i];

    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {

            if (arr2[i] % arr1[j] == 0)
            {

                if ((arr2[i] / arr1[j]) == maxv)
                    cnt++;
                else if ((arr2[i] / arr1[j]) > maxv)
                {
                    maxv = arr2[i] / arr1[j];
                    cnt = 1;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}