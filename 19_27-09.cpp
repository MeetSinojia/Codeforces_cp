// https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    int maxi = INT_MIN;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int in, out;
        cin >> out >> in;
        c = c + (in - out);
        maxi = max(maxi, c);
    }
    cout << maxi;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}