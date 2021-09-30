#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int count1 = 0;
    bool flag1 = true;
    for (int i = 0; i < s.size(); i++)
    {
        count1 = 0;
        if (s[i] == '1')
        {

            while ((s[i] == '1'))
            {
                count1++;
                i++;
            }
            if (count1 >= 7)
            {
                flag1 = false;
                break;
            }
        }
    }
    bool flag0 = true;
    if (flag1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            int count0 = 0;
            if (s[i] == '0')
            {
                while ((s[i] == '0'))
                {
                    count0++;
                    i++;
                }
                if (count0 >= 7)
                {
                    flag0 = false;
                    break;
                }
            }
        }
    }

    if (!flag0 or !flag1)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}