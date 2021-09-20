#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag = 1;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (flag && s[i] == '0')
        {
            flag = 0;
            continue;
        }
        else if (flag && i == n - 1)
            break;
        cout << s[i];
    }
    return 0;
}