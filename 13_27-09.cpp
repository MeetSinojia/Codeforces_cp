// https://codeforces.com/problemset/problem/510/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, m;
    cin >> n >> m;
    int temp = 0;
    for (int i = n; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            if (temp == 1)
            {
                cout << "#";
                temp = 0;
            }
            else if (temp == 0)
            {
                temp = 1;
            }
            for (int j = 0; j < m - 1; j++)
            {
                cout << ".";
            }
            if (temp == 1)
            {
                cout << "#";
            }

            cout << endl;
        }

        else
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
    cout << endl;
}