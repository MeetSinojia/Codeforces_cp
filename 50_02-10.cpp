// https://codeforces.com/problemset/problem/1199/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int t = a[i];
        bool flag = true;

        for (int j = i - 1; j > i - x - 1; j--)
        {
            if (j >= 0)
            {
                if (t >= a[j])
                {
                    flag = false;
                }
            }
        }

        for (int j = i + 1; j < i + y + 1; j++)
        {
            if (j < n)
            {
                if (t >= a[j])
                {
                    flag = false;
                }
            }
        }

        if (flag == true)
        {
            cout << i + 1 << endl;
            return;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}