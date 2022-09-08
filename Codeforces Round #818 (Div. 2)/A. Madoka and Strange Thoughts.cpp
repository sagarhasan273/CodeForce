#include<iostream>
using namespace std;

#define nline cout << endl

void check(){
    int n;
    cin >> n;
    cout << n + (n/2 * 2) + (n/3 * 2);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check(), nline;
    }
}