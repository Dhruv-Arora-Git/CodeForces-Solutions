#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string fyodor, matroskin, sharic;
    cin >> fyodor >> matroskin >> sharic;
    if (((fyodor == matroskin) and (matroskin == sharic)) or ((fyodor != matroskin) and (matroskin != sharic) and (fyodor != sharic)))
    {
        cout << "?"
             << "\n";
        return;
    }
    else if ((fyodor == "rock" and matroskin == "scissors" and sharic == "scissors") or (fyodor == "paper" and matroskin == "rock" and sharic == "rock") or (fyodor == "scissors" and matroskin == "paper" and sharic == "paper"))
    {
        cout << "F"
             << "\n";
    }
    else if ((matroskin == "rock" and fyodor == "scissors" and sharic == "scissors") or (matroskin == "paper" and fyodor == "rock" and sharic == "rock") or (matroskin == "scissors" and fyodor == "paper" and sharic == "paper"))
    {
        cout << "M"
             << "\n";
    }
    else if ((sharic == "rock" and fyodor == "scissors" and matroskin == "scissors") or (sharic == "paper" and fyodor == "rock" and matroskin == "rock") or (sharic == "scissors" and fyodor == "paper" and matroskin == "paper"))
    {
        cout << "S"
             << "\n";
    }
    else
    {
        cout << "?"
             << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}