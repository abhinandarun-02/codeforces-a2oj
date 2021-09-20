#include <bits/stdc++.h>
using namespace std;

#define INF 2e18

int main()
{

    int n, m, min = INF;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
        cin >> arr[i];

    sort(arr, arr + m);

    for (int i = 0; i < m; i++)
    {
        if (i + (n - 1) == m)
            break;

        if (arr[i + (n - 1)] - arr[i] < min)
            min = arr[i + (n - 1)] - arr[i];
    }

    cout << min;
    return 0;
}