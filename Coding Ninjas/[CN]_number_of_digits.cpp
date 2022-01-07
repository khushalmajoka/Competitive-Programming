// Problem Statement: Number of digits
// Problem Level: EASY
// Problem Description:
// Given the code to find out and return the number of digits present in a number recursively. 
// But it contains few bugs, that you need to rectify such that all the test cases should pass.
// Input Format :
// Integer n

// Output Format :
// Count of digits

// Constraints :
// 1 <= n <= 10^6

// Sample Input 1 :
//  156

// Sample Output 1 :
// 3

// Sample Input 2 :
//  7

// Sample Output 2 :
// 1

// ==========================================================

#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }
    n /= 10;
    return 1+sum(n);
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