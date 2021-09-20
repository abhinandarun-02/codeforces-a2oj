#include <iostream>
using namespace std;

int i, n, x, y, minv = 1001;

int main()
{

    cin >> n;
    int arr[n];
    fo(i, n) cin >> arr[i];

    for (i = 0; i < n - 1; i++)
    {
        if (abs(arr[i] - arr[i + 1]) < minv)
        {
            minv = abs(arr[i] - arr[i + 1]);
            x = i + 1;
            y = i + 2;
        }
    }

    if (abs(arr[0] - arr[n - 1]) < minv)
    {
        minv = abs(arr[0] - arr[n - 1]);
        x = n;
        y = 1;
    }

    cout << x << " " << y;
    return 0;
}