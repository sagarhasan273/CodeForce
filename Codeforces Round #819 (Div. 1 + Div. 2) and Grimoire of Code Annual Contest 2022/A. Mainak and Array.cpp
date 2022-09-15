#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int solve(){
    int N; cin >> N; 
    int arr[N]; for (int i = 0; i < N; i++) cin >> arr[i];

    int ans=INT_MIN;

    for(int i = 0; i < N; i++) ans = max(ans, arr[i] - arr[0]);
    for(int i = 0; i < N-1; i++) ans = max(ans, arr[N-1] - arr[i]);
    for(int i = 1; i < N; i++) ans = max(ans, (arr[i-1] - arr[i]));
    
    return ans;
}

int main(){
    int t; cin >> t;
    while (t--) cout << solve() << endl;
    return 0;
}