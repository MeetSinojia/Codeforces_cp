// https://codeforces.com/problemset/problem/1373/A

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    int t;
    ll a, b, c, f, s;
    cin >> t;
    while (t--)
    {
        f = -1, s = -1;
        cin >> a >> b >> c;

        if (a < c)
        {
            f = 1;
        }

        if (c < a * b)
        {
            s = b;
        }
        cout << f << " " << s << endl;
    }

    return 0;
}