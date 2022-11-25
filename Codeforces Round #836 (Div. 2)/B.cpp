#include<bits/stdc++.h>

using namespace std;

#define int                      long long
#define end                      '\n'

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
    int n; cin >> n;
    vector<int> arr;
    if (n%2 == 1){
        for(int i = 0; i < n; i++) cout << 1 << ' ';
        cout << endl;
    }else{
        arr.pb(1);
        arr.pb(n-1);
        arr.pb(n/2);
        arr.pb(n/2);
        for (int i = 0; i < n-4; i++) arr.pb(n);

        vectorprint(arr);
    }
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}