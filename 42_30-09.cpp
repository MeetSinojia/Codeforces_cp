// https://codeforces.com/problemset/problem/1141/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0;
        return;
    }

    if (b % a != 0)
    {
        cout << -1;
        return;
    }
    ll d = b / a;
    ll ans = 0;
    while (d % 3 == 0)
    {
        d /= 3;
        ans++;
    }
    while (d % 2 == 0)
    {
        d /= 2;
        ans++;
    }

    if (d != 1)
        ans = -1;
    cout << ans << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}