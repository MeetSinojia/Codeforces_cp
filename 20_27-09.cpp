// https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, k;
    cin >> n >> k;
    int r;
    while (k != 0)
    {
        r = n % 10;
        if (r == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
        k--;
    }
    cout << n << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}
