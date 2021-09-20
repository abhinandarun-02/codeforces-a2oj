#include <iostream>
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

    int n, a, i, sum = 0, count = 0;
    cin >> n;

    fo(i, n)
    {
        cin >> a;
        sum += a;
    }

    int arr[5] = {1, 2, 3, 4, 5};

    for (i = 0; i < 5; i++)
    {
        if ((arr[i] + sum) % (n + 1) != 1)
            count++;
    }

    cout << count;

    return 0;
}