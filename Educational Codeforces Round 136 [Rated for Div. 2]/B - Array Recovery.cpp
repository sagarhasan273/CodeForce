#include<iostream>

using namespace std;

void solve(){
    int n;cin >> n;
    int d[n], a[n];
    for(int i = 0; i < n; i++) cin >> d[i];

    int x, y;
    a[0] = d[0];
    for (int i = 1; i<n; i++){
        x = a[i-1] + d[i];
        y = a[i-1] - d[i];

        if (d[i] && y >= 0){
            cout << -1 << endl; return;
        }else a[i] = x;
    }

    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }cout << endl;

}

int main(){
    int t;cin >> t;
    while(t--)solve();
}