// Problem Statement: Remove X
// Problem Level: MEDIUM
// Problem Description:
// Given a string, compute recursively a new string where all 'x' chars have been removed.
// Input format :
// String S

// Output format :
// Modified String

// Constraints :
// 1 <= |S| <= 10^3
// where |S| represents the length of string S.

// Sample Input 1 :
// xaxb

// Sample Output 1:
// ab

// Sample Input 2 :
// abc

// Sample Output 2:
// abc

// Sample Input 3 :
// xx

// =========================================================

#include <bits/stdc++.h>
using namespace std;

string remove_x(string s){
    if(s.size() == 0){
        return "";
    }

    string small = remove_x(s.substr(1));

    if(s[0] == 'x'){
        return small;
    }

    return s[0] + small;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        cout << remove_x(s) << endl;
    }

    return 0;
}