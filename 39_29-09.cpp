// https://codeforces.com/problemset/problem/1430/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n; 
    cout << 2 << endl;
    int a = n, b = n - 1;
    for (int i = 1; i < n; i++)
    {
        cout << a << " " << b << endl;
        a = (a + b + 1) / 2;
        b--;
    }
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
    }
}