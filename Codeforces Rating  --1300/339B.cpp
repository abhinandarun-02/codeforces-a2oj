#include <iostream>
using namespace std;

typedef long long int ll;

int main()
{
    //Recieving values
    ll n, m, i;
    cin >> n >> m;
    ll arr[m];
    for (i = 0; i < m; i++)
        cin >> arr[i];

    ll t = 1, j = 0;
    t = abs(t - arr[j]); //Distance between house1 and first task
    for (i = 0; i < m - 1; i++)
    {
        if (arr[j] <= arr[j + 1])
            t += abs(arr[j] - arr[j + 1]);
        else if (arr[j] > arr[j + 1])
            t += (n - arr[j]) + arr[j + 1];
        j++;
    }

    cout << t;

    return 0;
}