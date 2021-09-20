#include <iostream>
using namespace std;

int main()
{
    int n, m, first_prime;
    cin >> n >> m;
    for (int i = n + 1;; i++)
    {
        if (i == 2 || i == 3 || i == 5 || i == 7)
        {
            first_prime = i;
            break;
        }
        else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
        {
            first_prime = i;
            break;
        }
    }
    if (first_prime == m)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
