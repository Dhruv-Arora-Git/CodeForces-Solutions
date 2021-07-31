#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long kCost, nDollars, wBananas;
    cin >> kCost >> nDollars >> wBananas;
    long long cost = kCost;
    for (int i = 2; i <= wBananas; i++)
    {
        cost += kCost * i;
    }
    if (cost < nDollars)
        cout << 0 << '\n';
    else
        cout << cost - nDollars << '\n';

    return 0;
}