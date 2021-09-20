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

    int n, a, i, j, count = 0;
    int x[1000], y[1000];
    bool up[200], down[200], left[200], right[200];

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (x[i] == x[j] && y[i] < y[j])
                up[i] = true;
            else if (x[i] == x[j] && y[i] > y[j])
                down[i] = true;
            else if (x[i] > x[j] && y[i] == y[j])
                left[i] = true;
            else if (x[i] < x[j] && y[i] == y[j])
                right[i] = true;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (up[i] == true && down[i] == true && left[i] == true && right[i] == true)
            count++;
    }

    cout << count;

    return 0;
}