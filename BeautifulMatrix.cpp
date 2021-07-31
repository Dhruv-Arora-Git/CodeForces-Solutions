#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[6][6];
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (matrix[i][j] == 1)
            {
                cout << abs(3 - i) + abs(3 - j) << '\n';
            }
        }
    }
    return 0;
}