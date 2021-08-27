#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int count = 0;
    if (T == 1)
    {
        cout << 0 << '\n';
        return 0;
    }
    vector<int> scores;
    while (T--)
    {
        int points;
        cin >> points;
        scores.push_back(points);
    }
    int curr_max = -1;
    for (int i = 0; i < scores.size(); i++)
    {
        if (scores[i] > curr_max)
        {
            curr_max = scores[i];
        }
        else
        {
            count++;
        }
    }
    int curr_min = 100001;
    for (int i = 0; i < scores.size(); i++)
    {
        if (scores[i] < curr_min)
        {
            curr_min = scores[i];
        }
        else
        {
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}