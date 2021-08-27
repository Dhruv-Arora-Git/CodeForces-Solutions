#include <bits/stdc++.h>
using namespace std;

int main()
{
    // remaining
    int T;
    cin >> T;
    vector<int> police;
    int count = 0;
    while (T--)
    {
        int p;
        cin >> p;
        police.push_back(p);
    }

    int chor = 0, pol = 0, local_chor = 0, index = 0;

    while (police[index] == -1)
    {
        chor++;
        index++;
    }
    for (int i = index; i < police.size(); i++)
    {
        if (police[i] == -1)
            local_chor++;

        if (police[i] > 0)
        {
            pol += police[i];
        }
        if (local_chor > pol && pol > 0)
            chor++;
    }
    cout << chor << '\n';
    return 0;
}