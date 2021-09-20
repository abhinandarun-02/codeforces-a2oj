#include <iostream>
using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    cin >> n >> m;

    int s = n + m;

    if (n > m)
    {

        for (int i = 0; i < s; i++)
        {
            if (n > 0)
            {
                cout << 'B';
                n--;
            }
            if (m > 0)
            {
                cout << 'G';
                m--;
            }
        }
    }
    else
    {
        for (int i = 0; i < s; i++)
        {
            if (m > 0)
            {
                cout << 'G';
                m--;
            }
            if (n > 0)
            {
                cout << 'B';
                n--;
            }
        }
    }

    return 0;
}