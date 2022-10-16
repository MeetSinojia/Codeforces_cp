// https://codeforces.com/problemset/problem/109/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    int c4 = 0, c7 = 0;
    while (n >= 0)
    {
        if (n % 7 == 0)
        {
            c7 = n / 7;
            n = 0;
            break;
        }
        c4++;
        n = n - 4;
    }
    if (n == 0)
    {
        while (c4--)
        {
            cout << "4";
        }
        while (c7--)
        {
            cout << "7";
        }
    }
    else
    {
        cout << "-1";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}
