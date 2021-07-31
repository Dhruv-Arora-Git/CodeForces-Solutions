#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    //string ans = "";
    //ans.push_back(s[0]);
    long long count = 0;
    for (int i = 1; i < s.size() - 1; i++)
    {
        count++;
    }
    //ans.push_back(to_string(count));
    //ans.push_back(s[s.size() - 1]);

    cout << s[0] << count << s[s.size() - 1] << '\n';
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string n;
        cin >> n;
        if (n.size() > 10)
        {
            solve(n);
        }
        else
        {
            cout << n << '\n';
        }
    }

    return 0;
}