#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, c;
    cin >> n >> m;
    int num = n;
    vector<int> arr, arr2;

    //Accepting input to two vectors
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        arr.push_back(a);
        arr2.push_back(a);
    }

    //Sorting vectors
    sort(arr.begin(), arr.end(), greater<int>());
    sort(arr2.begin(), arr2.end());

    //Finding Maximum [looping until n==0]&&[sorting vector in all iterations]
    c = 0;
    for (int i = 0; n > 0;)
    {
        sort(arr.begin(), arr.end(), greater<int>());
        while (arr[i] > 0)
        {
            c += arr[i];
            arr[i] -= 1;
            n--;
            if (arr[i + 1] > arr[i])
                break;
            if (n == 0)
                break;
        }
    }

    int max = c;

    //Finding Minimum [looping until n==0]&&[inner loop until value == 0]
    c = 0;
    for (int i = 0; num > 0; i++)
    {
        while (arr2[i] > 0)
        {
            c += arr2[i];
            arr2[i]--;
            num--;
            if (num == 0)
                break;
        }
    }

    int min = c;

    //Printing values
    cout << max << " " << min;

    return 0;
}