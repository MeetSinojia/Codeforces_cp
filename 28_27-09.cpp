// https://codeforces.com/problemset/problem/702/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int c = 1;
    int temp = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            temp++;
        }

        else
        {
            c = max(c, temp);
            temp = 1;
        }
    }
    c = max(c, temp);
    cout << c;
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}
