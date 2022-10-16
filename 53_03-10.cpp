// https://codeforces.com/problemset/problem/1244/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = n;
    if (s[0] == '1' || s[n - 1] == '1')
    {
        cout << 2 * n;
    }
    else
    {
        int ans = n;
        int i, j, k;
        int l = -1, r = -1;

        for (i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                l = i + 1;
                break;
            }
        }

        for (i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                r = i + 1;
                break;
            }
        }

        if (l != -1)
        {
            k = (n - l + 1) + max(l, n - l + 1);
            ans = max(ans, k);

            k = (n - r + 1) + max(r, n - r + 1);
            ans = max(ans, k);
        }

        cout << ans;
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