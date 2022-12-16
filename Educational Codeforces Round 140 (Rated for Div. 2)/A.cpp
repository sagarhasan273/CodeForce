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
    int a, b, c, d, e, f; 
    cin >> a >> b;
    cin >> c >> d;
    cin >> e >> f;

    if ((a == c || a == e || e == c) && (b == d || d == f || f == b)){
        print("No")
    }else{
        print("Yes")
    }
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}