// Problem Statement: Print numbers
// Problem Level: EASY
// Problem Description:
// Given is the code to print numbers from 1 to n in increasing order recursively. 
// But it contains few bugs that you need to rectify such that all the test cases pass.
// Input Format :
// Integer n

// Output Format :
// Numbers from 1 to n (separated by space)

// Constraints :
// 1 <= n <= 10000

// Sample Input 1 :
//  6

// Sample Output 1 :
// 1 2 3 4 5 6

// Sample Input 2 :
//  4

// Sample Output 2 :
// 1 2 3 4

// ==============================================================

#include <bits/stdc++.h>
using namespace std;

void print_numbers(int n){
    if(n == 0){
        return;
    }
    print_numbers(n-1);
    cout << n << " ";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        print_numbers(n);

        cout << endl;
    }

    return 0;
}