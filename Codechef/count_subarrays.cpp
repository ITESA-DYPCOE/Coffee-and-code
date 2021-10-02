#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        vector<ll> cache(n, 0);
        cache[0] = 0;

        for (ll i = 1; i < n; i++)
            cache[i] = v[i] >= v[i - 1] ? 1 + cache[i - 1] : 0;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
            ans += cache[i] + 1;
        cout << ans << "\n";
    }

    return 0;
}
