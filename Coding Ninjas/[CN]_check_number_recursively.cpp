// Problem Statement: Check number recursively
// Problem Level: EASY
// Problem Description:
// Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x

// Output Format :
// 'true' or 'false'

// Constraints :
// 1 <= N <= 10^3

// Sample Input 1 :
// 3
// 9 8 10
// 8

// Sample Output 1 :
// true

// Sample Input 2 :
// 3
// 9 8 10
// 2

// Sample Output 2 :
// false

// =======================================================

#include <bits/stdc++.h>
using namespace std;

bool check(int arr[], int size, int x){
    if(size == 1){
        return arr[0] == x;
    }

    bool found = check(arr+1, size-1, x);

    if(found){
        return true;
    }else{
        return arr[0] == x;
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int x;
        cin >> x;

        cout << (check(arr, n, x) ? "true" : "false") << endl;
    }

    return 0;
}