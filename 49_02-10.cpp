// https://codeforces.com/problemset/problem/1139/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n, a[200001];
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll c = a[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        if (a[i] >= a[i + 1])
        {
            a[i] = a[i + 1] - 1;

            if (a[i + 1] - 1 > 0)
            {
                c += a[i + 1] - 1;
            }
        }

        else
        {
            c += a[i];
        }
    }
    cout << c;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}