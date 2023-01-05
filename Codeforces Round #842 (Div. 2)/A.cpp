#include <bits/stdc++.h>

using namespace std;

#define int                      long long

#define f(i, a, n)               for (int i = a; i < n; i++)

#define arrayinput(a, n)         f(i, 0, n) cin >> a[i]
#define arrayprint(a, n)         f(i, 0, n) {cout << a[i] << ' ';} cout << endl
#define arraysort(a, n)          sort(a, a+n)

#define all(a)                   a.begin(), a.end()
#define rall(a)                  a.rbegin(), a.end()
#define print(a)                 {cout << a << endl; return;}

#define vectorinput(v)           for(auto &i : v) cin >> i
#define vectorprint(v)           for(auto x: v) {cout << x << ' ';} cout << endl


// ---------------------Start Code Here---------------------
int fectorial(int t){
    int prod = 1;
    for (int i = 1; i <= t; i++){
        prod *= i;
    }
    return prod;
}
void testcase(){
    int n; cin >> n;

    print(n-1);
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}