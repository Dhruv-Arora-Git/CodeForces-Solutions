#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int time = 0;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((time + i * 5) <= (240 - k))
        {
            time += i * 5;
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << "\n";

    return 0;
}