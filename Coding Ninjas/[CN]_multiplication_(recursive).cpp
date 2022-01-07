// Problem Statement: Multiplication (Recursive)
// Problem Level: EASY
// Problem Description:
// Given two integers M & N, calculate and return their multiplication using recursion. 
// You can only use subtraction and addition for your calculation. No other operators are allowed.
// Input format :
// Line 1 : Integer M
// Line 2 : Integer N

// Output format :
// M x N

// Constraints :
// 0 <= M <= 1000
// 0 <= N <= 1000

// Sample Input 1 :
// 3 
// 5

// Sample Output 1 :
// 15

// Sample Input 2 :
// 4 
// 0

// Sample Output 2 :
// 0

// ===========================================================

#include <bits/stdc++.h>
using namespace std;

int mul(int m, int n){
    if(n == 0){
        return 0;
    }

    return mul(m, n-1)+m;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int m, n;
        cin >> m >> n;

        cout << mul(m, n) << endl;
    }

    return 0;
}