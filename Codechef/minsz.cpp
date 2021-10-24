#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define pb push_back
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;

ll get_msb(ll n) {
    ll cnt = 0ll;
    while (n) {
        cnt++;
        n >>= 1ll;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        if (n == 0) {
            cout << "2\n";
            cout << "1"
                 << " "
                 << "1\n";
            continue;
        }

        if ((n & (n + 1)) == 0) {
            cout << "1\n";
            cout << n << "\n";
            continue;
        }

        ll pos = get_msb(n);
        vl v;
        bool flip = false;
        for (ll i = pos; i > 0ll; i--) {
            ll bit = (n & (1ll << (i - 1ll))) ? 1ll : 0ll;
            if (bit == 1ll and (not flip))
                v.pb((1ll << i) - 1), flip = true;
            else if (bit == 0ll and flip)
                v.pb((1ll << i) - 1), flip = false;
        }

        cout << v.size() << "\n";
        // sort(all(v));
        for (auto x : v)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
