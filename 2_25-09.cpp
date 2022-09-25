// https://codeforces.com/problemset/problem/490/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool comp(int a, int b)
{
    return (a < b);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    }

    vector<int> a;
    vector<int> b;
    vector<int> c;
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            a.push_back(i + 1);
        }

        if (arr[i] == 2)
        {
            b.push_back(i + 1);
        }

        if (arr[i] == 3)
        {
            c.push_back(i + 1);
        }
    }

    int mini = min({a.size(), b.size(), c.size()}, comp);

    cout << mini << endl;
    for (int i = 0; i < mini; i++)
    {
        cout << a[i] << " " << b[i] << " " << c[i];
        cout << endl;
    }
}
int main()
{
    solve();
    return 0;
}
