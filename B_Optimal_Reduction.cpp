#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    ll a[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0;

    while (i + 1 < n && a[i + 1] >= a[i])
    {
        i++;
    }

    while (i + 1 < n && a[i + 1] <= a[i])
    {
        i++;
    }

    if (i + 1 == n)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}