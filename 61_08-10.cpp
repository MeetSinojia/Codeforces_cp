#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int l, r;
    cin >> l >> r;
    int x = l, y = 2 * l;
    if (y > r)
    {
        cout << -1 << " " << -1;
    }
    else
    {
        cout << x << " " << y;
    }
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
