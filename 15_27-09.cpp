// https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int mini = INT_MAX, maxi = INT_MIN;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t <= mini)
        {
            mini = t;
            a = i;
        }
        if (t > maxi)
        {
            maxi = t;
            b = i;
        }
    }

    int c = 0;
    c = b + (n - a - 1);

    if (a < b)
    {
        c = c - 1;
    }

    cout << c;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}