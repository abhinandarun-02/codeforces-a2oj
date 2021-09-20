#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define fo(i, n) for (i = 0; i < n; i++)
#define ll long long
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define endl "\n"
#define el cout << "\n"
#define deb(x) cerr << #x << " " << x << endl;

void solve()
{
    int n, k, num;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr.pb(num);
    }

    sort(arr.begin() + k - 1, arr.end());

    if (arr[k - 1] != arr[n - 1])
    {
        cout << -1;
        return;
    }
    else
    {
        for (int i = k - 1; i >= 0; i--)
        {
            if (arr[i] != arr[i - 1])
            {
                cout << i << endl;
                return;
            }
        }
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("Files/Error.txt", "w", stderr);
#endif

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

 