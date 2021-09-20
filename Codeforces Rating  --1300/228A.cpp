#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4, count = 0, num;

    set<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        nums.insert(num);
    }

    cout << 4 - nums.size();
    return 0;
}