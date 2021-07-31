#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int AntonCount = 0, DanikCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
            AntonCount++;
        else if (str[i] == 'D')
            DanikCount++;
    }
    if (AntonCount > DanikCount)
        cout << "Anton" << '\n';
    else if (DanikCount > AntonCount)
        cout << "Danik" << '\n';
    else
        cout << "Friendship" << '\n';
    return 0;
}