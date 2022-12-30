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
#define pb                       push_back


// ---------------------Start Code Here---------------------

void testcase(){
    int n, k; cin >> n; cin >> k;

    int l = 1, r = n;

    vector<int> result;

    while (l < r){
        result.pb(r--);
        result.pb(l++);
    }
    if (l == r)
        result.pb(l);

    vectorprint(result);
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}