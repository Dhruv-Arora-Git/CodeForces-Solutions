#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> digits(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> digits[i];
    }
    sort(digits.begin(), digits.end());
    cout << (digits[3] - digits[0]) << " " << (digits[3] - digits[1]) << " " << (digits[3] - digits[2]) << '\n';
    return 0;
}