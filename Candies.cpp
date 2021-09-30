#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, size;
    cin >> a >> size;
    int arr[size] = {0};
    int i = 0;
    while (a--)
    {
        if (i == size)
            i = 0;
        arr[i]++;
        i++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
