#include<bits/stdc++.h>

using namespace std;

#define int                      long long
#define f(i, a, n)               for (int i = a; i < n; i++)
#define arrayinput(a, n)         f(i, 0, n) cin >> a[i]
#define arrayprint(a, n)         f(i, 0, n) {cout << a[i] << ' ';} cout << endl
#define arraysort(a, n)          sort(a, a+n)
#define all(a)                   a.begin(), a.end()
#define print(a)                 {cout << a;}
#define vectorinput(v)           for(auto &i : v) cin >> i
#define vectorprint(v)           for(auto x: v) {cout << x << ' ';} cout << endl


// ---------------------Start Code Here---------------------

void testcase(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i == n-1){
                print('*')
            }else{
                if (j == 0 || j == n-1){
                    print('*')
                }else{
                    print(' ')
                }
            }
        }cout << ' ';

        for(int j = 0; j < n; j++){
            if (i == 0){
                print('*')
            }else{
                if (j == 0 || j == n-1){
                    print('*')
                }else{
                    print(' ')
                }
            }
        }cout << endl;
    }
}

signed main(){
    testcase();
}