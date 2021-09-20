#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define endl "\n"
#define el cout << "\n"
#define deb(x) cout << #x << " " << x << endl;
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

    // for (auto x : arr) cout << x << " ";

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

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