#include<bits/stdc++.h>

using namespace std;

#define int                      long long
#define f(i, a, n)               for (int i = a; i < n; i++)
#define arrayinput(a, n)         f(i, 0, n) cin >> a[i]
#define arrayprint(a, n)         f(i, 0, n) {cout << a[i] << ' ';} cout << endl
#define arraysort(a, n)          sort(a, a+n)
#define all(a)                   a.begin(), a.end()
#define print(a)                 {cout << a << endl; return;}
#define end                      cout << endl;

#define vectorinput(v)           for(auto &i : v) cin >> i
#define vectorprint(v)           for(auto x: v) {cout << x << ' ';} cout << endl
#define pb                       push_back




// ---------------------Start Code Here---------------------

void testcase(){
    int n; cin >> n;
    string s="";

    while (n){
        if (n%2 == 1){
            s.append("A");
            n = (n-1)/2;
        }else{
            s.append("B");
            n = (n-2)/2;
        }
    }
    
    for(int i = s.size()-1; i >= 0; i--) cout << s[i];
    end;
}

signed main(){
    testcase();
}