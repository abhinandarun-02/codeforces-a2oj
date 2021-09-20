#include <bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------------------------------------------------------------------------*/

void solve()
{

    int n;
    cin >> n;

    char arr[2 * n];
    for (int i = 0; i < 2 * n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    sort(arr + n, arr + 2 * n);

    int gcnt(0), lcnt(0);
    for (int i = 0, j = n; i < n; i++, j++)
    {
        if (arr[i] > arr[j])
            gcnt++;
        else if (arr[i] < arr[j])
            lcnt++;
    }

    cout << ((gcnt == n || lcnt == n) ? "YES" : "NO");
}

int main()
{
    int tc;
    tc = 1;
    //cin >> tc;

    for (int i = 1; i <= tc; i++)
    {
        //cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}