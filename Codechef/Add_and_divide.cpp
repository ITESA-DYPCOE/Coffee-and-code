#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) v.begin(), v.end()
const int mod = 1e9 + 7;

void getFactors(vector<int> &factors, int n)
{
    if(n % 2 == 0)
    {
        factors.push_back(2);
        while(n % 2 == 0)
            n /= 2;
    }
    for(int i = 3; i <= sqrt(n); i += 2)
    {
        if(n % i == 0)
        {
            factors.push_back(i);
            while(n % i == 0)
                n /= i;
        }
    }
    if(n > 2)
        factors.push_back(n);
    return;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        vector<int> factors;
        getFactors(factors, a);
        
        bool its_true = true;
        for(auto every_factor : factors)
            if(b % every_factor != 0)
            {
                its_true = false;
                break;
            }
        its_true ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
