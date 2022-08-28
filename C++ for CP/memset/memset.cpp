#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    memset(arr, 0, sizeof(arr));
    int n = sizeof(arr)/sizeof(int);
    while (n--) cout << arr[n];
}