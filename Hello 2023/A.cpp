#include<bits/stdc++.h>

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

void testcase(){
    int n; cin >> n;
    string s = ""; cin >> s;

    int ans = -1, l = 0, r = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == 'L') l++;
        if (s[i] == 'R') r++;
    }
    for (int i = 1; i < n; i++){
        if (s[i] == 'L' and s[i-1] == 'R'){
            print(0); return;
        }
        if (s[i-1] == 'L' and s[i] == 'R'){
            ans = i;
            break;
        }else{
            ans = 0;
        }
    }

    if (l == n or r == n){
        print(-1)
    }else{
        print(ans)
    }
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}