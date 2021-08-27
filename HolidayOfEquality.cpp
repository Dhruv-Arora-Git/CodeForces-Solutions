#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    vector<int> v;
    while (T--)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    int max = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }

    long long count = 0;

    for (int i = 0; i < v.size(); i++)
    {
        count += (max - v[i]);
    }
    cout << count << '\n';
    return 0;
}