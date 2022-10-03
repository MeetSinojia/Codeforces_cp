// https://codeforces.com/problemset/problem/118/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;

    for (int r = -n; r <= n; r++)
    {
        int t = n - abs(r);
        for (int i = 0; i < abs(r); i++)
        {
            cout << "  ";
        }
        for (int i = 0; i < t; i++)
        {
            cout << i << " ";
        }
        for (int i = t; i > 0; i--)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}