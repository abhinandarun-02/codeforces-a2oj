#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    long long diff = 0, a, b, res = -1, maxx = 0, minn = 2e18;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        maxx = max(b, maxx);
        minn = min(a, minn);

        if (abs(a - b) > diff)
        {
            diff = max(abs(a - b), diff);
            res = i + 1;
        }
    }

    cout << (diff == maxx - minn ? res : -1);

    return 0;
}