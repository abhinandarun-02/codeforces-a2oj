#include <bits/stdc++.h>
using namespace std;
#define DAYS 7

int main()
{
    int num, sum=0, arr[DAYS];
    cin >> num;
    
    for (int i=0; i<DAYS; i++)
        cin >> arr[i];

    for (int i=0;; i=(i+1)%7){
        sum+=arr[i];
        // cout << sum << " ";
        if (sum>=num){
            cout << i+1;
            break;
        }
    }
    
    return 0;
}