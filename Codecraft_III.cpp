#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string months[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };
    string m;
    int k;
    cin >> m >> k;
    int s = 0;
    for (int i = 0; i < 12; i++)
    {
        if (months[i] == m)
        {
            s = i;
            break;
        }
    }
    int ans = (s + k) % 12;
    cout << months[ans] << "\n";
    return 0;
}
