#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    long long count = 0;

    for (int i = 0; i < n.size(); i++)
    {
        bool appears = false;
        for (int j = 0; j < i; j++)
        {
            if (n[j] == n[i])
            {
                appears = true;
                break;
            }
        }

        if (!appears)
            count++;
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << '\n';
    }
    else
    {
        cout << "IGNORE HIM!" << '\n';
    }

    return 0;
}