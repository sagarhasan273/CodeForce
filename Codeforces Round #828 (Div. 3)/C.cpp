#include<bits/stdc++.h>

using namespace std;

#define int long long


void testcase(){
    int n, start = 0, mx = 0, flag = 1; char c; string s;
    cin >> n >> c >> s;
    s += s;
    n += n;

    for (int i = 0; i < n; i++){
        if (s[i] == c && flag) {start = i; flag = 0;}
        if (s[i] == 'g' && !flag) {
            mx = max(mx, i - start);
            flag = 1;
        }
    }

    cout << mx << endl;
    return;
}

signed main(){
    int t; cin >> t; while (t--) testcase();
}