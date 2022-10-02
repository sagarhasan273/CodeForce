#include<iostream>

using namespace std;

void solve(){
    int n; cin >> n;

    n = n-3;
    n = n/3;
    cout << n-1 << endl;
}

int main(){
    int t; cin >> t;
    while (t--) solve();
    return 0;
}