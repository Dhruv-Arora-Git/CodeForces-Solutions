#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    cin >> a >> b;
    for (auto &c : a)
    {
        c = tolower(c);
    }
    for (auto &c : b)
    {
        c = tolower(c);
    }

    if (a > b)
    {
        cout << "1" << '\n';
    }
    else if (a < b)
    {
        cout << "-1" << '\n';
    }
    else
    {
        cout << "0" << '\n';
    }

    return 0;
}