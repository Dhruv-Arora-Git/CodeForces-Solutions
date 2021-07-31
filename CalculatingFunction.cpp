#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long num;
    cin >> num;

    if (num % 2 == 0)
    {

        cout << fixed << setprecision(0) << ceil(num / 2.0) << '\n';
    }
    else
    {

        cout << fixed << setprecision(0) << ((ceil(num / 2.0)) * -1) << '\n';
    }

    return 0;
}