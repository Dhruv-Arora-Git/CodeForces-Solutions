#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> ans;
    for (int i = 0; i < s.size(); i += 2)
    {
        ans.push_back(s[i] - '0');
    }
    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        if (i < ans.size() - 1)
            cout << ans[i] << "+";
        else
            cout << ans[i] << '\n';
    }

    return 0;
}