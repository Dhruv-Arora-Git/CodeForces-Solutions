#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cin >> len;
    string stone;
    cin >> stone;
    int count = 0;
    for (int i = 0; i < len - 1; i++)
    {

        if (stone[i] == stone[i + 1])
            count++;
    }
    cout << count << '\n';

    return 0;
}