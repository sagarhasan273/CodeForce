#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void solve(){
    int n, m; cin >> n >> m;
    vector<long long> s(n+1);

    for(int i=n-m+1; i <= n; i++) cin >> s[i];

    if (m == 1){
        cout << "Yes" << endl; return;
    }

    vector<long long> a(n+1);

    for (int i=n-m+2; i <= n; i++) a[i] = s[i] - s[i-1];

    if (!is_sorted(a.begin()+n-m+2, a.end())){
        cout << "No" << endl; return;
    }else if (s[n-m+1] > a[n-m+2]*(n-m+1)){
        cout << "No" << endl; return;
    }cout << "Yes" << endl;

}

int32_t main(){
    int t; cin >> t;
    while(t--)solve();
}
