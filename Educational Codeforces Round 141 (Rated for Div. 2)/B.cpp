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
#define vectorprint(v)           for(auto x: v) {cout << x << ' ';}


// ---------------------Start Code Here---------------------

void testcase(){
    int n; cin >> n;

    vector<int> arr;

    int l = 1, r = n*n;

    while (l < r){
        arr.push_back(l);l++;
        arr.push_back(r);r--;
    }
    if (n%2 == 1)
        arr.push_back(l);
    int c = 0;
    vector<int> newarr;
    for (int i = 1; i <= arr.size(); i++){
        newarr.push_back(arr[i-1]);
        
        if (i%n == 0 and c == 0){
            vectorprint(newarr); c=1; newarr={}; cout << '\n';
        }else if (i%n == 0 and c == 1){
            reverse(newarr.rbegin(), newarr.rend());
            vectorprint(newarr); c=0; newarr={}; cout << endl;
        }
    }

}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}