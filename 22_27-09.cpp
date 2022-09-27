// https://codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int a, b;
    cin >> a >> b;
    int c = 0;
    while (a <= b)
    {
        c++;
        a = 3*a;
        b = 2*b;
    }
    cout << c;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}