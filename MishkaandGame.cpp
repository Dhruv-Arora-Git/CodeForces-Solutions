#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    int Mishka = 0, Chris = 0;
    int x, y;
    while (T--)
    {
        cin >> x >> y;
        if (x > y)
            Mishka++;
        else if (x < y)
            Chris++;
    }
    if (Mishka > Chris)
        cout << "Mishka" << '\n';
    else if (Mishka < Chris)
        cout << "Chris" << '\n';
    else
        cout << "Friendship is magic!^^" << '\n';
    return 0;
}