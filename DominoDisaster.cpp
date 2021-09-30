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
        for (int i = 0; i < size; i++)
        {
            if (s[i] == 'D')
                cout << 'U';
            else if (s[i] == 'U')
                cout << 'D';
            else
                cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}