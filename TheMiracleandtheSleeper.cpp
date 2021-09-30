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
        int l, r;
        cin >> l >> r;
        int res = r / 2 + 1;
        if (l >= res)
            cout << r % l << "\n";
        else
            cout << r % res << "\n";
    }
    return 0;
}