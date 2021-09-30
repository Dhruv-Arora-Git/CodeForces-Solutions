#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    map<int, int, greater<int>> m;
    int index = 1;
    while (T--)
    {
        int n;
        cin >> n;
        m.insert({n, index});
        index++;
    }
    auto it = m.begin();
    cout << it->second << " ";
    it++;
    cout << it->first << "\n";
    return 0;
}