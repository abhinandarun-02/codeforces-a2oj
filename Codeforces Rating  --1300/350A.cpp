#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int arr1[n], arr2[m];

    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    int max1 = *max_element(arr1, arr1 + n);
    int min1 = *min_element(arr1, arr1 + n);
    int min2 = *min_element(arr2, arr2 + m);

    if (max1 >= min2 || min1 * 2 >= min2)
    {
        cout << -1;
    }
    else
        cout << max(min1 * 2, max1);

    return 0;
}