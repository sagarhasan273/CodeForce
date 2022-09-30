#include<iostream>

using namespace std;

void solve(){
    int n, m;cin >> n >> m;
    if (n >= 2 && m >= 2) cout << 2 << " " << 2 << endl;
    else cout << n << " " << m << endl;
}

int main(){
    int t;cin >> t;
    while(t--)solve();
}