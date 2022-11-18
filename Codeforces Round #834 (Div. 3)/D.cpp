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

void testcase(){
    int n, m, mx = -1, ans = 0; 
    cin >> n >> m;
    int mid = m/2;
    while (m > mid){
        int num = m * n, cnt = 0; int prev_num = num;
        while (num && num % 10 == 0){
            cnt++;
            num /= 10;
        }
        if (mx < cnt){
            mx = cnt;
            ans = prev_num;
        }
        m--;
    }

    print(ans);
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}