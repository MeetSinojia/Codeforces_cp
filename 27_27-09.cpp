// https://codeforces.com/problemset/problem/1368/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int t;
    ll a, b, n;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> n;
        ll sum = 0, c = 0;
        while (sum <= n)
        {
            if (a > b)
            {
                b += a;
                sum = b;
                c++;
            }
            else
            {
                a += b;
                sum = a;
                c++;
            }
            if (sum > n)
            {
                break;
            }
        }
        cout << c << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}