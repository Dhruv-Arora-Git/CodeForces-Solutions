#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int count = 0;
    while (T--)
    {
        int Petya, Vasya, Tonya;
        cin >> Petya >> Vasya >> Tonya;
        if ((Petya == 1 && Vasya == 1) || (Petya == 1 && Tonya == 1) || (Tonya == 1 && Vasya == 1))
            count++;
    }
    cout << count << '\n';
    return 0;
}