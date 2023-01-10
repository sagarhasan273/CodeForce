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
    int n; cin >> n;
    int count = 0;
    vector<int> arr(n, 0), demo;
    vectorinput(arr);

    for (auto x: arr){
        demo.push_back(x);
    }
    sort(all(demo));
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        mp[demo[i]]++;
        if (mp[demo[i]] > 2 or demo[i] < i+1){
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