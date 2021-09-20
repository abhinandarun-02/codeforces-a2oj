#include <iostream>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, sx, sy, ex, ey, time = 0;
    cin >> t >> sx >> sy >> ex >> ey;
    string s;
    cin >> s;

    int diffx = ex - sx;
    int diffy = ey - sy;

    for (int i = 0; i < t; i++)
    {

        if (diffx == 0 && diffy == 0)
            break;

        else if (diffx != 0)
        {
            if (diffx < 0 && s[i] == 'W')
                diffx++;
            else if (diffx > 0 && s[i] == 'E')
                diffx--;
        }
        if (diffy != 0)
        {
            if (diffy < 0 && s[i] == 'S')
                diffy++;
            else if (diffy > 0 && s[i] == 'N')
                diffy--;
        }

        time++;
    }

    if (!(diffx == 0 && diffy == 0))
        cout << -1;
    else
        cout << time;

    return 0;
}