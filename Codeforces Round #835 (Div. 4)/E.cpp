#include<bits/stdc++.h>

using namespace std;

#define int                      long long
#define f(i, a, n)               for (int i = a; i < n; i++)
#define arrayinput(a, n)         f(i, 0, n) cin >> a[i]
#define arrayprint(a, n)         f(i, 0, n) {cout << a[i] << ' ';} cout << endl
#define arraysort(a, n)          sort(a, a+n)
#define all(a)                   a.begin(), a.end()
#define print(a)                 {cout << a << endl; return;}
#define vectorinput(v)           for(auto &i : v) cin >> i
#define vectorprint(v)           for(auto x: v) {cout << x << ' ';} cout << endl


// ---------------------Start Code Here---------------------

int calc(vector<int>& arr){
    int ans = 0, zeros = 0;
    for (int i = arr.size()-1; i >= 0; i--){
        if (arr[i] == 0) zeros++;
        else ans += zeros;
    }
    return ans;
}

void testcase(){
    int n, ans = 0; cin >> n;
    vector<int> arr(n);

    f(i, 0, n) cin >> arr[i];
    ans = calc(arr);
    for (int i = 0; i < n; i++){
        if (arr[i] == 0){
            arr[i] = 1;
            ans = max(ans, calc(arr));
            arr[i] = 0;
            break;
        }
    }

    for (int i = n-1; i >= 0; i--){
        if (arr[i] == 1){
            arr[i] = 0;
            ans = max(ans, calc(arr));
            arr[i] = 1;
            break;
        }
    }

    print(ans)
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}