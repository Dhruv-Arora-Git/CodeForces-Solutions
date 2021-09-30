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
        int size;
        string s;
        cin >> size >> s;
        int count = 0;
        ll sum = 0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] != '0')
            {
                if (i != size - 1)
                    count++;
                sum += s[i] - '0';
            }
        }
        cout << (sum + count) << "\n";
    }
    return 0;
}