#include<bits/stdc++.h>
#include<math.h>

using namespace std;

void solve(){
    int n, g=0; 
    cin >> n;
    vector<int> arr(n, 0);
    for (auto x: arr) {
        cin >> x;
        g = __gcd(g, x); 
    }
    
    if (g == 1) cout << 0 << endl;
    else if (__gcd(g, n) == 1) cout << 1 << endl;
    else if (__gcd(g, n-1) == 1) cout << 2 << endl;
    else cout << 3 << endl;
}

int main(){int t; cin >> t; while(t--)solve();}