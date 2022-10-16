// https://codeforces.com/problemset/problem/1296/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    int co = 0, ce = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t % 2 == 0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }

    if (co == 0)
    {
        cout << "NO";
    }

    else if (co % 2 == 0 && ce == 0)
    {
        cout << "NO";
    }

    else
    {
        cout << "YES";
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
        cout << endl;
    }
}
