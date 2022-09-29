// https://codeforces.com/problemset/problem/1300/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n, a;
    cin >> n;
    ll idx = n;
    n = n * 2;

    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    ll ans = 0;
    ans = abs(v[idx - 1] - v[idx]);
    cout << ans;
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