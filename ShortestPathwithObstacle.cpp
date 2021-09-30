#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int x[3], y[3];
        for (int i = 0; i < 3; ++i)
        {
            cin >> x[i] >> y[i];
        }
        int res = 0;
        if (x[0] == x[1] and x[0] == x[2])
        {
            cout << abs(y[0] - y[1]) + ((y[0] - y[2]) * (y[2] - y[1]) > 0 ? 2 : 0) << '\n';
        }
        else if (y[0] == y[1] and y[1] == y[2])
        {
            cout << abs(x[0] - x[1]) + ((x[0] - x[2]) * (x[2] - x[1]) > 0 ? 2 : 0) << '\n';
        }
        else
            cout << abs(x[0] - x[1]) + abs(y[0] - y[1]) << '\n';
    }
    return 0;
}