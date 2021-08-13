#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, res=0;
    
    cin >> t;
    while(t--){
        cin >> a;
        cin >> b;
        cin >> c;
        
        if (a+b+c>=2) res++;
    }
    cout << res;

    return 0;
}
