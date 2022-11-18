#include<bits/stdc++.h>

using namespace std;

#define int                      long long
#define f(i, a, n)               for (int i = a; i < n; i++)
#define arrayinput(a, n)         f(i, 0, n) cin >> a[i]
#define arrayprint(a, n)         f(i , 0, n) {cout << a[i] << ' ';} cout << endl
#define arraysort(a, n)          sort(a, a+n)
#define all(a)                   a.begin(), a.end()
#define print(a)                 {cout << a << endl; return;}
#define vectorinput(v)           for(auto &i : v) cin >> i


void testcase(){
    int n; cin >> n;
    int arr[n], prod = 1;
    arrayinput(arr, n);

    f(i, 0, n) prod *= arr[i];

    prod = prod % (int)(double)pow(2, n);

    if (prod == 0){
        cout << 0 << endl;
        return;
    }

    int a[n], cnt = 0;
    f(i, 0, n) a[i] = i+1;

    for (int i = 0; i < n; i++){
        if (prod % a[i] == 0){
            prod = prod / 2;
            cnt++;
        }
    }

    if (prod == 1){
        cout << cnt << endl;
    }else{
        cout << -1 << endl;
    }

    return;
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}