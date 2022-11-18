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
    int n, s, sum = 0, mx = 0, flag = 0; cin >> n >> s;
    vector<int> vec(n);
    for (auto &i: vec) {
        cin >> i;
        sum += i;
        mx = max(mx, i);
    }
    sum += s;
    s = 0;
    int i = 1;
    for (; i <= mx; i++){
        s += i;
    }

    while (s < sum){
        s += i;
        i++;
    }
    
    if (s == sum) flag = 1;

    if (flag){
        print("YES")
    }else{
        print("NO")
    }
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}