// https://codeforces.com/problemset/problem/1237/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int f = 0;
    for (int j = 0; j < n; j++)
    {
        float k = (double)a[j] / 2;
        if ((a[j] % 2) != 0)
        {
            if (f == 0)
            {
                a[j] = ceil(k);
                f = 1;
            }
            else if (f == 1)
            {
                a[j] = floor(k);
                f = 0;
            }
        }
        else
        {
            a[j] = a[j] / 2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\n";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}