// https://codeforces.com/problemset/problem/1353/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a, b;
    int ma = 31, mb = 31;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
        ma = max(ma, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        b.push_back(t);
        mb = max(mb, mb);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i] < b[i])
        {
            a[i] = b[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum;
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