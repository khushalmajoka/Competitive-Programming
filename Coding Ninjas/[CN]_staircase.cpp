// Problem Statement: Staircase
// Problem Level: EASY
// Problem Description:
// A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method 
// to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.
// Input format :
// Integer N

// Output Format :
// Integer W

// Constraints :
// 1 <= N <= 30

// Sample Input 1 :
// 4

// Sample Output 1 :
// 7

// Sample Input 2 :
// 5

// Sample Output 2 :
// 13

// =================================================================

#include <bits/stdc++.h>
using namespace std;

int stair(int n){
    if(n == 0 || n == 1 || n == 2){
        return n;
    }

    if(n == 3){
        return 4;
    }

    return stair(n-1) + stair(n-2) + stair(n-3);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        cout << stair(n) << endl;
    }

    return 0;
}