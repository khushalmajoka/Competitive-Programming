// Problem Statement: Sum of digits (recursive)
// Problem Level: EASY
// Problem Description:
// Write a recursive function that returns the sum of the digits of a given integer.
// Input format :
// Integer N

// Output format :
// Sum of digits of N

// Constraints :
// 0 <= N <= 10^9

// Sample Input 1 :
// 12345

// Sample Output 1 :
// 15

// Sample Input 2 :
// 9

// Sample Output 2 :
// 9

// ===========================================

#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }

    return sum(n/10) + n%10;
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