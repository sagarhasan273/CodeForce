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
	int res = 0;
	int count_2 = 0;
	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		while (num % 2 == 0) {
			count_2++;
			num /= 2;
		}
	}
	vector<int> num_2_i;
    
	for (int i = 2; i <= n; i += 2) {
		int num_2 = 0;
		int j = i;
		while (j % 2 == 0) {
			num_2++;
			j /= 2;
		}
		num_2_i.push_back(num_2);
	}

	sort(num_2_i.begin(), num_2_i.end());

	int m = num_2_i.size() - 1;

	while (count_2 < n && m >= 0) {
		count_2 += num_2_i[m--];
		res++;
	}

	if (count_2 < n) print("-1")
	else print(res);
}

signed main(){
    int t; cin >> t; while (t--)
    {
        testcase();
    }
}