#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int count = 0;
    if (d == a || d == b || d == c)
        count++;
    if (a == c || a == b)
        count++;
    if (b == c)
        count++;

    cout << count << '\n';
    return 0;
}