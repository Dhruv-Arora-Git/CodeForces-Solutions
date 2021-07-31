#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    string m, n;
    cin >> m >> n;
    for (int i = 0; i < m.size(); i++)
    {
        if (m[i] != n[i])
            cout << 1;
        else
            cout << 0;
    }

    return 0;
}