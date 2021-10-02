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
        vector<ll> memo(n, 0);
        memo[n - 1] = 0;

        for (ll i = n - 2; i >= 0; i--)
        {
            if (v[i] >= 0)
            {
                if (v[i + 1] >= 0)
                    memo[i] = 0;
                else
                    memo[i] = 1 + memo[i + 1];
            }
            else if (v[i] < 0)
            {
                if (v[i + 1] < 0)
                    memo[i] = 0;
                else
                    memo[i] = 1 + memo[i + 1];
            }
        }

        for (ll i = 0; i < n; i++)
            cout << memo[i] + 1 << " ";
        cout << "\n";
    }

    return 0;
}
