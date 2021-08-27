#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count[26] = {0};
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (auto &c : s)
    {
        c = tolower(c);
    }

    for (int i = 0; i < n; i++)
    {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {

        if (count[i] == 0)
        {
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES" << '\n';
    return 0;
}