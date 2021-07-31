#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int x = 0;
    while (T--)
    {
        string n;
        cin >> n;
        if (n[n.size() - 1] == '-' || n[0] == '-')
        {
            x--;
        }
        else
        {
            x++;
        }
    }
    cout << x << '\n';
    return 0;
}