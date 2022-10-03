// https://codeforces.com/problemset/problem/476/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int x, n, m;
    while (cin >> n >> m)
    {
        if (m > n)
        {
            x = -1;
        }
        else
        {
            if (n % 2 == 0)
            {
                x = n / 2;
            }
            else
            {
                x = (n / 2) + 1;
            }
            while (x % m != 0)
            {
                x++;
            }
        }

        cout << x;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}
