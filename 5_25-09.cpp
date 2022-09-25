// https://codeforces.com/problemset/problem/1220/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// Naive
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int co = 0, ce = 0, cz = 0, cr = 0, cn = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o')
        {
            co++;
        }

        if (s[i] == 'n')
        {
            cn++;
        }

        if (s[i] == 'e')
        {
            ce++;
        }

        if (s[i] == 'z')
        {
            cz++;
        }

        if (s[i] == 'r')
        {
            cr++;
        }
    }

    int c1 = 0, c0 = 0;
    c1 = min(co, min(cn, ce));
    co = co - c1;
    cn = cn - c1;
    ce = ce - c1;
    c0 = min(cz, min(ce, min(cr, co)));

    while (c1 > 0)
    {
        cout << 1 << " ";
        c1--;
    }

    while (c0 > 0)
    {
        cout << 0 << " ";
        c0--;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif

    solve();
}

// Optimised
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, one = 0, zero = 0;
    cin >> n;
    char str[n];
    cin >> str;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'z')
            ++zero;
        else if (str[i] == 'n')
            ++one;
    }
    while (one--)
        cout << "1 ";
    while (zero--)
        cout << "0 ";
}