#include <iostream>
using namespace std;

int main()
{
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