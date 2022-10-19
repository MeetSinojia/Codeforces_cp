#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll temp1 = a * d;
    ll temp2 = b * c;
    if (temp1 == temp2)
    {
        cout << 0;
    }
    else if (temp1 == 0 || temp2 == 0)
    {
        cout << 1;
    }
    else if (temp1 % temp2 == 0 || temp2 % temp1 == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 2;
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