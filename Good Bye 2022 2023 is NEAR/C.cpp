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
    int n; cin >> n;
    vector<int> arr(n);
    vectorinput(arr);

    unordered_set<int> arr_set(all(arr));

    if (n != arr_set.size()){
        print("NO")
    }else{
        int even = 0;

        for (int i = 0; i < n; i++){
            if (arr[i]%2==0) even++;
        }

        if (even == n or even == 0 or even == 1){
            print("YES")
        }else{
            print("NO")
        }
    }
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}