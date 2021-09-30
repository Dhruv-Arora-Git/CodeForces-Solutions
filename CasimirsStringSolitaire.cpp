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
        string s;
        cin >> s;
        int size = s.size();
        int count_a = 0, count_b = 0, count_c = 0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] == 'A')
                count_a++;
            else if (s[i] == 'B')
                count_b++;
            else if (s[i] == 'C')
                count_c++;
        }
        if (count_a + count_c == count_b)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}