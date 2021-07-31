#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long num;
    cin >> num;
    int luckyCount = 0;
    while (num != 0)
    {
        if ((num % 10 == 4) || (num % 10 == 7))
            luckyCount++;

        num /= 10;
    }
    if (luckyCount == 4 || luckyCount == 7)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }

    return 0;
}