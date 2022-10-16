#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x > y)
    {
        swap(x, y);
    }
    if (x > z)
    {
        swap(x, z);
    }
    if (y > z)
    {
        swap(y, z);
    }

    if (y == z)
    {
        cout << "YES\n";
        cout << x << " " << x << " " << z;
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