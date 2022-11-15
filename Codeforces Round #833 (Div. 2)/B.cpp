#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void tasecase()
{
    int n, count = 0; string nums;
    cin >> n >> nums;

    for (int i = 0; i < n; i++){
        int f[10]{}, distinct = 0, maxfr = 0;
        for (int j = i; j < n && (++f[nums[j]-'0']) <= 10; j++){
            maxfr = max(f[nums[j] - '0'], maxfr);
            if(f[nums[j] - '0'] == 1) distinct++;
            if (maxfr <= distinct) count++;
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        tasecase();
}