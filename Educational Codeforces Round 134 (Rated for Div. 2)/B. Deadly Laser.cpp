#include<iostream>

using namespace std;

int solve(){
    int rows, cols, x, y, d;
    cin >> rows >> cols >> x >> y >> d;

    if ((x-d <= 1 || y+d >= cols) && (y-d <= 1 || x+d >= rows)){
        return -1;
    }
    return rows+cols-2;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cout << solve() << endl;
    }
}