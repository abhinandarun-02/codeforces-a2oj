#include <iostream>

using namespace std;

int main()
{
    int n, max_val, min_val, count=0;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) cin>>a[i];
    max_val = a[0];
    min_val = a[0];
    for (int i=1; i<n; i++){
        if (a[i]>max_val){
            max_val =a[i];
            count++;
        } 
        else if (a[i]<min_val){
            min_val =a[i];
            count++;
        } 
    }
    cout << count;

    return 0;
}
