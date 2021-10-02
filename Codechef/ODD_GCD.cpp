#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;

int getSetBits(int n) {
    return log2(n & -n);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            int pos = getSetBits(x);
            mini = min(mini, pos);
        }
        cout << mini << "\n";
    }
    return 0;
}
