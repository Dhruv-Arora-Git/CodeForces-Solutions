#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, comp;
    cin >> a >> b;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        comp.push_back(a[i]);
    }
    if (b == comp)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
}