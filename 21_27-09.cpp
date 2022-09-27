// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, k, w;
    cin >> k >> n >> w;
    int p = 0;
    for (int i = 1; i <= w; i++)
    {
        p = p + i * k;
    }

    if (n >= p)
    {
        cout << 0;
        return;
    }

    cout << p - n;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}


