// https://codeforces.com/contest/1426/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, x;
    cin >> n >> x;
    int fl = 1;
    while (n - 2 > 0)
    {
        fl++;
        n = n - x;
    }

    cout << fl;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}