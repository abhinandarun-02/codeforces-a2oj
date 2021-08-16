#include <iostream>
using namespace std;

int main()
{

    int x, y, ans, nums[6][6];
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 6; j++) {
            cin >> nums[i][j];
            if (nums[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }
    ans =  abs(x - 3) + abs(y - 3);
    cout << ans;
    return 0;
}