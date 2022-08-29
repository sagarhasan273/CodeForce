#include <iostream>
#include <bits/stdc++.h>

#define print(x) cout << x << endl;

using namespace std;

int main(){
    int n, mn=INT_MAX, mx=INT_MIN;
    cin >> n;
    for (int i=0; i<n; i++){
        int val;
        cin >> val;
        mx = max(val, mx);
        mn = min(val, mn);
    }
    
    print((mx-mn+1) - n);
    
}