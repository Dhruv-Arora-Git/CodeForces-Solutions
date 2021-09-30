#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;

    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] == 'B'))
        {
            if (i > 0 and ans[ans.size() - 1] != ' ')
                ans.push_back(' ');
            i += 2;
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    // removing leading and trailing spaces
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[0] == ' ')
        {
            ans.erase(0, 1);
        }
        if (ans[ans.length() - 1] == ' ')
        {
            ans.erase(ans.length() - 1, ans.length());
        }
        if (ans[0] != ' ' and ans[ans.length() - 1] != ' ')
        {
            break;
        }
    }

    cout << ans;
    return 0;
}