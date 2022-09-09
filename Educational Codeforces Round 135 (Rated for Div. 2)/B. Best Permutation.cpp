#include<iostream>
using namespace std;

#define int long long
#define nline << endl
#define space << " "

// *-.-* sagarhasan273 *-.-*
// *-.-* Happy Coding *-.-*

void sagarhasan273(){
    int n;
    cin >> n;
    if (n&1){
        cout << 1 space;
    }
    for (int i = n-2; i>(n&1); i--){
        cout << i space;
    }
    cout << n-1 space << n nline;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        sagarhasan273();
    }
    return 0;
}
