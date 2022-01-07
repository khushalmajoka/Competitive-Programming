// Problem Statement: Geometric Sum
// Problem Level: MEDIUM
// Problem Description:
// Given k, find the geometric sum i.e.
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)

// using recursion.
// Input format :
// Integer k

// Output format :
// Geometric sum

// Constraints :
// 0 <= k <= 1000

// Sample Input 1 :
// 3

// Sample Output 1 :
// 1.875

// Sample Input 2 :
// 4

// Sample Output 2 :
// 1.9375

// =================================================

#include <bits/stdc++.h>
using namespace std;

double sum(int n){
    if(n == 0){
        return 1;
    }

    return 1/pow(2, n) + sum(n-1);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        cout << sum(n) << endl;
    }

    return 0;
}