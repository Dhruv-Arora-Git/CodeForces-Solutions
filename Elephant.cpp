#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num % 5 == 0)
        cout << num / 5 << '\n';
    else
        cout << num / 5 + 1 << '\n';
    return 0;
}