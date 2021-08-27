#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long num;
        cin >> num;
        cout << fixed << setprecision(0) << floor((num - 1) / 2) << '\n';
    }
    return 0;
}