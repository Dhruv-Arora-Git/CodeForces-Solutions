#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int count = 0;
    while (T--)
    {
        int m, n;
        cin >> m >> n;
        if (abs(m - n) >= 2)
        {
            count++;
        }
    }

        cout << count << '\n';
    return 0;
}