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
    int i = 0, j = 0, m = 0;
    int n, q;
    cin >> n >> q;
    vector<long long> p(n), s(n + 1);
    for (auto &x : p)
        cin >> x;
    sort(p.begin(), p.end());
    for (int i = 0; i < n; ++i)
        s[i + 1] = s[i] + p[i];
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << s[n - x + y] - s[n - x] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
