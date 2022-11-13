#include <bits/stdc++.h>
#include <math.h>

using namespace std;
#define ll long long

void solve()
{
    ll n, ans = 0; string s;
    cin >> n >> s;

    for (int i = 0; i < s.size(); i++){
        ll f[10]{}, distinct = 0, max_freq = 0;

        for (int j = i; j < s.size() && (++f[s[j]-'0']) <= 10; j++){
            max_freq = max(max_freq, f[s[j]-'0']);
            if (f[s[j]-'0'] == 1) distinct++;
            if (max_freq <= distinct) ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}