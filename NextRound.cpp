#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    int ans[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> ans[i];
    }
    int compare = ans[k];
    //cout << k << '\n';
    //cout << compare << " " << ans[k] << '\n';
    int len = sizeof(ans) / sizeof(ans[0]);
    for (int i = 1; i <= len; i++)
    {
        if (ans[i] >= compare && ans[i] > 0)
            count++;
    }
    cout << count << '\n';
    return 0;
}