#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, ans = 0; cin >> n;
    string s; cin >> s;

    for (int i = 0; i < n-1; i ++){
        if (s[i] != s[i+1]) ans++;
    }

    if (s[0] != '1' && ans >= 1) ans--;

    cout << ans << endl;
}

int main(){
    int t; cin >> t; while(t--) solve();
}