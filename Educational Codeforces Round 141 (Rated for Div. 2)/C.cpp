#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

#define int                      long long

#define f(i, a, n)               for (int i = a; i < n; i++)

#define arrayinput(a, n)         f(i, 0, n) cin >> a[i]
#define arrayprint(a, n)         f(i, 0, n) {cout << a[i] << ' ';} cout << endl
#define arraysort(a, n)          sort(a, a+n)

#define all(a)                   a.begin(), a.end()
#define rall(a)                  a.rbegin(), a.rend()
#define print(a)                 {cout << a << endl; return;}

#define vectorinput(v)           for(auto &i : v) cin >> i
#define vectorprint(v)           for(auto x: v) {cout << x << ' ';} cout << endl


// ---------------------Start Code Here---------------------

void testcase(){
    int n, m; cin >> n >> m;
    vector<int> arr(n, 0);
    vectorinput(arr);

    sort(rall(arr));
    int l = 1;
    while (arr[l-1] > m and l-1 < n) l++;

    print(l)
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}