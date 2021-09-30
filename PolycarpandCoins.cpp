#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << " " << 0 << "\n";
        return;
    }
    ll c1 = n / 3;
    ll c2 = n - c1;
    c2 /= 2;
    if (n % 2 != 0)
        c2++;
    cout << "Answer ===== " << c1 << " " << c2 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
/*
ll n = 1000;
    // cin >> n;
    ll c1 = 0, c2 = 0;
    ll low = 1, high = n / 2;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (mid <= n)
        {
            c1 = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "Result: ------" << c1 << "\n";
    */