// https://codeforces.com/contest/996/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    int c = 0;
    while (n > 0)
    {
        if (n % 100 == 0)
        {
            n = n - 100;
            c++;
            continue;
        }

        if (n % 20 == 0)
        {
            n = n - 20;
            c++;
            continue;
        }

        if (n % 10 == 0)
        {
            n = n - 10;
            c++;
            continue;
        }

        if (n % 5 == 0)
        {
            n = n - 5;
            c++;
            continue;
        }

        if (n % 1 == 0)
        {
            n = n - 1;
            c++;
            continue;
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