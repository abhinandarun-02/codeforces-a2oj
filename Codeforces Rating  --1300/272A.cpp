#include <iostream>
using namespace std;

int main()
{

    int n, a, i, sum = 0, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
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