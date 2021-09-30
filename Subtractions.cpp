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

        int a, b;
        cin >> a >> b;
        int count = 1;
        while (true)
        {
            if (a > b)
                a -= b;
            else if (b > a)
                b -= a;
            else if (a == b)
                break;

            count++;
        }
        cout << count << "\n";
    }
    return 0;
}