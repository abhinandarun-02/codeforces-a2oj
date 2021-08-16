#include <iostream>
using namespace std;


int check_on(int x1, int x2, int x3 = 0, int x4 = 0, int x5 = 0) {
    return ((x1 + x2 + x3 + x4 + x5) % 2 == 0);
}

int main() {
    int a11, a12, a13, a21, a22, a23, a31, a32, a33;
    cin >> a11 >> a12 >> a13;
    cin >> a21 >> a22 >> a23;
    cin >> a31 >> a32 >> a33;

    cout << check_on(a11 , a12, a21) << check_on(a11, a12, a13, a22) << check_on(a13, a12, a23) << endl;
    cout << check_on(a21 , a22, a11, a31) << check_on(a22, a21, a12, a23, a32) << check_on(a23, a22, a13, a33) << endl;
    cout << check_on(a31 , a21, a32) << check_on(a32, a22, a31, a33) << check_on(a33, a32, a23) << endl;
    return 0;
}