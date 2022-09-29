#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    int c1 = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t > 0)
        {
            c1 = c1 + t;
        }

        else if (c1 > 0)
        {
            c1--;
        }

        else
        {
            res++;
        }
    }

    cout << res;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}
