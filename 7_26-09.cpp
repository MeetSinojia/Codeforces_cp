// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s[0] == '+' || s[2] == '+')
        {
            x++;
        }

        else
        {
            x--;
        }
    }
    cout << x;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}