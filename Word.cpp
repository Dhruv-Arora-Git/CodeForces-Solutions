#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int lower = 0, upper = 0;
    for (int i = 0; i < n.size(); i++)
    {
        if (isupper(n[i]))
            upper++;
        else
            lower++;
    }
    if (lower >= upper)
        for (auto &c : n)
        {
            c = tolower(c);
        }
    else
        for (auto &c : n)
        {
            c = toupper(c);
        }

    cout << n << '\n';
    return 0;
}