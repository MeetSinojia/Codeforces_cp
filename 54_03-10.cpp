// https://codeforces.com/problemset/problem/1027/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int flag = true;

    for (int i = 0; i < n / 2; i++)
    {
        if (abs(s[i] - s[n - 1 - i]) != 0 && abs(s[i] - s[n - 1 - i]) != 2)
        {
            flag = false;
        }
        // cout << abs(s[i] - s[n - 1 - i]) << " ";
    }

    if (flag)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
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