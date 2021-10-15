#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define pb push_back
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string str;
        cin >> str;

        unordered_map<int, int> mp1, mp2;
        for (int i = 0; i < n; i++) {
            mp1[i - (str[i] - 48)]++;
            mp2[i + (str[i] - 48)]++;
        }
        int total = 0;
        for (auto x : mp1)
            total += (x.second * (x.second - 1) / 2);
        for (auto x : mp2)
            total += (x.second * (x.second - 1) / 2);

        cout << total << "\n";
    }

    return 0;
}
