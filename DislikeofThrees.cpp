#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    v.push_back(1);
    int count = 1;
    for (int i = 1; i < 2000; i++)
    {
        if (!(i % 3 == 0 or i % 10 == 3))
        {
            v.push_back(count);
        }
        count++;
    }

    int T;
    cin >> T;
    while (T--)
    {
        int k;
        cin >> k;
        cout << v[k] << "\n";
    }

    return 0;
}