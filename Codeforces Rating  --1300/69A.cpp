#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, sum_a = 0, sum_b = 0, sum_c = 0;
    cin >> n;

    while (n--)
    {
        cin >> a >> b >> c;
        sum_a += a;
        sum_b += b;
        sum_c += c;
    }
    if (sum_a == 0 && sum_b == 0 && sum_c == 0)
        cout << "YES";
    else
        cout << "NO";
}