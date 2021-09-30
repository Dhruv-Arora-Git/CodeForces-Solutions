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
        ll a, b, c;
        cin >> a >> b >> c;
        ll maxi = max(a, b);
        ll mini = min(a, b);
        ll size = (maxi - mini - 1) * 2 + 2;
        if ((maxi - mini - 1) == 0 or (size < c) || ((maxi - mini) < (size / 2)) || (maxi > size)) // not a valid circle
        {
            cout << -1 << "\n";
        }
        else // even
        {
            if (c > (size / 2))
            {
                cout << (c - (maxi - mini)) << "\n";
            }
            else
            {
                cout << (c + (maxi - mini)) << "\n";
            }
        }
    }
    return 0;
}