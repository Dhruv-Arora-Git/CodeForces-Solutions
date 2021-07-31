#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string ans = "";
    ans.push_back(toupper(str[0]));
    for (int i = 1; i < str.size(); i++)
    {
        ans.push_back(str[i]);
    }
    cout << ans << endl;

    return 0;
}