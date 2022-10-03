// https://codeforces.com/problemset/problem/268/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    cout << (n - 1) * n * (n + 1) / 6 + n << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}
