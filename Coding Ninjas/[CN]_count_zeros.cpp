// Problem Statement: Count Zeros
// Problem Level: EASY
// Problem Description:
// Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
// Input Format :
// Integer N

// Output Format :
// Number of zeros in N

// Constraints :
// 0 <= N <= 10^9

// Sample Input 1 :
// 10204

// Sample Output 1 :
// 2

// Sample Input 2 :
// 708000

// Sample Output 2 :
// 4

// =================================================

#include <bits/stdc++.h>
using namespace std;

int count(int n){
    if(n == 0){
        return 0;
    }
    int res = count(n/10);
    return n % 10 == 0 ? res + 1 : res;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n == 0){
            cout << 1 << endl;
        }else{
            cout << count(n) << endl;
        }
    }

    return 0;
}