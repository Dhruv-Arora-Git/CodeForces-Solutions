#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z, t1, t2, t3;
    cin >> x >> y >> z >> t1 >> t2 >> t3;

    if ((abs(x - y) * t1) < ((abs(z - x) * t2) + (abs(x - y) * t2) + (3 * t3)))
    {
        cout << "NO"
             << "\n";
    }
    else
        cout << "YES"
             << "\n";
    return 0;
}