#include<iostream>

using namespace std;


void solve(){
    int n, i=0; cin >> n;
    int arr[n]; 
    for(int i=0; i<n; i++) cin >> arr[i];

    int e=0, o=0;

    for(int i=0; i<n; i++) {
        if (arr[i]%2 == 0) e++;
        else o++;
    }
    if (o==0) {cout << "Alice"; return;}

    if (e==0){
        if (((o/2)+1)%2 == 0){
            cout << "Alice";return;
        }else{
            cout << "Bob"; return;
        }
    }

    int target = (e+o)/2;
    if (e%2 == 0 && o%2 == 0) cout << "Alice"; return;
    if (e%2 == 1 && o%2 == 1) cout << "Bob"; return;
    if (target == e/2 + o/2) {cout << "Alice"; return;}
    else cout << "Bob";

}

int main(){
    int t; cin >> t; while(t--) {solve(); cout << endl;}
}