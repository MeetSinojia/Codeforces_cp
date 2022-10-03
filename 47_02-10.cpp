// https://codeforces.com/problemset/problem/500/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, t;
    cin >> n >> t;
    int c[n];
    int p = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int i = 1, x;
    while (i < t)
    {
        x = i + c[i - 1];
        i = x;
    }
    if (i == t)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}