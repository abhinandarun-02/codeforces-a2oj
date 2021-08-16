#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, k, sum = 0;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    k = sum / n;
    printf("%.12f\n", k); /* OR
    cout << fixed << setprecision(12) << k << endl;*/
    return 0;
}