#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    long long sides = 0;
    while (T--)
    {
        string poly;
        cin >> poly;
        if (poly == "Tetrahedron")
            sides += 4;
        else if (poly == "Cube")
            sides += 6;
        else if (poly == "Octahedron")
            sides += 8;
        else if (poly == "Dodecahedron")
            sides += 12;
        else if (poly == "Icosahedron")
            sides += 20;
    }
    cout << sides << '\n';
    return 0;
}