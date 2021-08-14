#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[12];
    cin >> n;
    
    for (int i=0; i<12; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+12);
    
    
    int i=12, sum=0, count=0;
    while(i-- && sum<n){
        sum+=arr[i];
        count++;
    }
    cout <<(sum>=n ? count : -1);
    
    return 0;
}