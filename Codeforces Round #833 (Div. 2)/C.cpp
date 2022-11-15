#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MaxN=2e5+5;
ll a[MaxN];
map<ll, ll> freq;

void solve(){
    ll n, maxfr = 0, currentSum = 0, ans = 0; cin >> n;
    freq.clear();
    int found_wildcard = 0;

    for (int i = 0; i < n; i++){
        cin >> a[i];

        if (a[i] == 0){
            if (found_wildcard) ans += maxfr;
            else ans = freq[0];

            found_wildcard = 1;
            maxfr = 0; freq.clear();
        }
        currentSum += a[i];
        maxfr = max(maxfr, ++freq[currentSum]);
    }

    if (found_wildcard) ans += maxfr;
    else ans += freq[0];
    
    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while (t--)solve();
}