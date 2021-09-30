#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            if (dq.empty())
                dq.push_front(arr[i]);
            else
            {
                if (dq.front() > arr[i])
                    dq.push_front(arr[i]);
                else
                    dq.push_back(arr[i]);
            }
        }
        while (!dq.empty())
        {
            cout << dq.front() << " ";
            dq.pop_front();
        }
        cout << "\n";
    }
    return 0;
}