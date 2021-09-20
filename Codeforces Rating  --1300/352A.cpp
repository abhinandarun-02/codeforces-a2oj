#include <iostream>
using namespace std;

int main()
{
    int n, i, a, x, five = 0, zero = 0;
    cin >> n;

    //Recieving values and also counting frequency of 5 and 0
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 5)
            five++;
        else
            zero++;
    }

    /*
								Approach
	---------------------------------------------------------------------------
	1) The value is divisible only when the no is a multiple of both 0 and 9
	2) If 0 does'nt exist, then it won't be divisible
	3) A series of digit 5 is divible by 9 only when there are 9 occurences of 5
	*/

    if (zero == 0)
        cout << -1;
    else
    {
        if (five < 9)
            cout << 0;
        else
        {
            x = (five / 9) * 9;
            for (i = 0; i < x; i++)
                cout << 5;
            for (i = 0; i < zero; i++)
                cout << 0;
        }
    }
    return 0;
}