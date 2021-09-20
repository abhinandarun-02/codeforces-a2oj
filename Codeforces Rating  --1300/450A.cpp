#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> vect;
    int n, m, input, f, i = 0, l = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        vect.push_back(make_pair(i + 1, input));
    }

    if (vect.size() == 1)
        l = 1;

    vector<pair<int, int>>::iterator it;

    while (vect.size() > 1)
    {
        it = vect.begin();

        if (m >= vect[i].second)
        {
            vect.erase(it);
            l = vect[0].first;
        }

        else
        {
            vect[0].second = vect[0].second - m;
            vect.push_back(make_pair(vect[0].first, vect[0].second));
            vect.erase(it);
            l = vect[0].first;
        }
    }

    cout << l;

    return 0;
}