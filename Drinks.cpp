#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;
        sum += n;
    }
    cout << fixed << setprecision(12) << sum / n << '\n';
    return 0;
}