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
#define p                        push 



// ---------------------Start Code Here---------------------

void testcase(){
    int n, m; cin >> n; cin >> m;

    vector<int> arr, arr1;


    for(int i = 0; i < n; i++){
        int t; cin >> t;
        arr.push_back(t);
    }
    for(int i = 0; i < m; i++){
        int t; cin >> t;
        arr1.push_back(t);
    }

    sort(arr.begin(), arr.end());
    sort(arr1.rbegin(), arr1.rend());

    int sum = 0, ind = 0;

    if (n < m){
        for (int i = 0; i < n; i++){
            sum += arr1[i];
        }
    }else if (n == m){
        for (int i = 0; i < m; i++){
            sum += arr1[i];
        } 
    }else{
        for (int i = 0; i < m; i++){
            sum += arr1[i];ind++;
        }

        while (ind < n){
            sum += arr[ind];ind++;
        }
    }

    

    print(sum);
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}