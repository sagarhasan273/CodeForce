#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, a, b, sa=0, mx=0; cin >> n;
    while(n--){
        cin >> a >> b;
        sa += min(a, b);
        mx = max(mx, max(a, b));
    }

    cout << 2 * (sa + mx) << endl;
}

int main(){int t; cin >> t; while (t--) solve();}