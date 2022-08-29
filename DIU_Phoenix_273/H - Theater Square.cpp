#include<bits/stdc++.h>
#define long long int;

using namespace std;

#define print(x) cout << x << endl;

int main(){
    int m, n; cin >> m >> n;
    int a, b, c, d; cin >> a >> b >> c >> d;

    int res = 0;
    int x = (b-1)%2;
    int y = (n-d)%2;
    int row = (c-(a-1));
    res = row*x + row*y;

    for (int i = 1; i <= m; i++){
        if (a > i || c < i){
            if (n&1) res++;
        }
    }

    print((res+1)/2)

    return 0;
}