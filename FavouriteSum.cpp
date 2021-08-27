#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        long long x;
        cin >> n >> x;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long sum = (x * (x + 1)) / 2;

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] <= x)
            {

                sum -= 2ll * v[i];
            }
        }

        cout << sum << "\n";
    }
    return 0;
}