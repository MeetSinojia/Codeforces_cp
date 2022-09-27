// https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s;
    cin >> s;
    char arr[s.size() / 2 + 1];
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            arr[j] = s[i];
            j++;
        }
    }
    sort(arr, arr + sizeof(arr));
    for (int i = 0; i < j; i++)
    {
        cout << arr[i];
        if (i != j - 1)
            cout << "+";
    }
}

int main()
{
#ifndef ONLINE_JUDGE
#endif
    solve();
}
