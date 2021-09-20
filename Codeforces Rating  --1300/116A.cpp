#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, a, b, sum = 0;
   cin >> n;
   int arr[n];

   for (int i = 0; i < n; i++)
   {
      cin >> a >> b;
      sum -= a;
      sum += b;
      arr[i] = sum;
   }
   cout << *max_element(arr, arr + n);

   return 0;
}
