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
    int n, m; cin >> n >> m;
    int count = 0, flag = 0;
    vector<int> arr(n, 0);
    vectorinput(arr);
    stack<int> stack;
    stack.push(1);
    for (int i = 0; i < n; i++){
        if (arr[i] == 1) {
            flag = 1;
        }

        if (flag and stack.top() + 1 == arr[i]){
            stack.push(arr[i]);
        }
    }
    count = n - stack.size();

    if (count == 0){
        print(0)
    }else if (count <= m){
        print(1)
    }else if (count%m){
        print((count/m) + 1)
    }else{
        print(count/m)
    }
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}