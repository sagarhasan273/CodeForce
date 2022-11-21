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
    bool l = false, r = false;

    int n; cin >> n;
    int arr[n], vellay = 0;
    arrayinput(arr, n);

    int i = 0;

    while (i < n){
        int l = i;
        while (l+1 < n && arr[l] >= arr[l+1]){
            l++;
        }

        while (l+1 < n && arr[l] <= arr[l+1]){
            l++;
        }
        vellay++;
        i = l+1;
    }

    if (vellay == 1){
        print("Yes")
    }else{
        print("No")
    }
    
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}