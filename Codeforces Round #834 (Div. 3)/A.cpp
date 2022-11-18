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
    string s; cin >> s;
    bool flag = true;
    int n = s.size();

    for (int i = 0; i < n; i++){
        if (s[i] == 'Y'){
            if (i+1 < n && s[i+1] != 'e') flag = false;
        }
        else if (s[i] == 'e'){
            if (i+1 < n && s[i+1] != 's') flag = false;
        }else if (s[i] == 's'){
            if (i+1 < n && s[i+1] != 'Y') flag = false;
        }else{
            flag = false;
        }
    }

    if (flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}