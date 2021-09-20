#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, num;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr.push_back(num);
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