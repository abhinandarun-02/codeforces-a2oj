#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, l;
    string a;
    cin >> n;

    while (n > 0) {
        cin >> a;
        l = a.length();
        if (l <= 10)
            cout << a << endl;
        else
            cout << a[0] << (l - 2) << a.back() << endl;
        n--;
    }
    return 0;
}