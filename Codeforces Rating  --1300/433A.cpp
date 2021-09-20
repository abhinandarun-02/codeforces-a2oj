#include <iostream>
using namespace std;

int main()
{

    int n, num, a(0), b(0), sum(0);
    cin >> n;
    if (n == 1)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num == 100)
            a++;
        else
            b++;
        sum += num;
    }
    if ((sum / 100) % 2 != 0 || (n % 2 != 0 && a == 0))
        cout << "NO";
    else
        cout << "YES";
    return 0;
}