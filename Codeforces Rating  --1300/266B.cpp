#include <iostream>
using namespace std;

int main()
{
    int n, t;
    string word;
    cin >> n >> t;
    cin >> word;

    while (t)
    {
        for (int i = -1; i < n; i++)
        {
            if (word[i] == 'B' && word[i + 1] == 'G')
            {
                word[i] = 'G';
                word[i + 1] = 'B';
                i++;
            }
        }
        t--;
    }
    cout << word;
    return 0;
}