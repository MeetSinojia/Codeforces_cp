#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define sortt(v) sort(v.begin(), v.end())
#define sorttd(a) sort(a.begin(), a.end(), greater<int>())
#define fo(i, n) for (i = 0; i < n; i++)
#define pb push_back
#define deb(x) cout << #x << '=' << x << endl
typedef vector<int> vi;
typedef vector<ll> vl;
const int mod = 1'000'000'007;

void solve()
{
    int i = 0, j = 0, n = 0, m = 0;
    cin >> n;
    int c = 0;
    int x, prev = 0;
    fo(i, n)
    {
        cin >> x;
        if (prev == 0 && x != 0)
        {
            c++;
        }
        prev = x;
    }

    cout << min(c, 2);
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}