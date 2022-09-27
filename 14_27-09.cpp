// https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "Tetrahedron")
        {
            c = c + 4;
        }
        else if (s == "Cube")
        {
            c = c + 6;
        }
        else if (s == "Octahedron")
        {
            c = c + 8;
        }
        else if (s == "Dodecahedron")
        {
            c = c + 12;
        }
        else if (s == "Icosahedron")
        {
            c = c + 20;
        }
    }
    cout<<c;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}
