#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << n << " ";

    for (int i = 1; i < n; i++)
    {
        cout << i << " ";
    }

    return 0;
}