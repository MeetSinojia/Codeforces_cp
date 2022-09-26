#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// Naive
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int c = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] != '0')
        {
            c++;
        }
    }
    cout << c << endl;
    for (int i = n - 1; i >= 0; i--)
    {

        if (s[i] != '0')
        {
            int j = n - i - 1;
            cout << s[i];
            while (j > 0)
            {
                cout << 0;
                j--;
            }
            cout << " ";
        }
    }
}

// Optimised
int main()
{
    long long n, t, i, a, b, r;

    cin >> t;
    while (t--)
    {
        vector<int> v;
        r = 1;
        cin >> n;
        while (n != 0)
        {
            r = r * 10;
            a = n % r;
            n = n - a;
            if (a != 0)
            {
                v.push_back(a);
            }
        }
        cout << v.size() << endl;
        for (i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}

// int main()
// {
// #ifndef ONLINE_JUDGE
// #endif
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//         cout << endl;
//     }
// }
