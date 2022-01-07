// Problem Statement: Pair star
// Problem Level: MEDIUM
// Problem Description:
// Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are 
// separated from each other by a "*".
// Input format :
// String S

// Output format :
// Modified string

// Constraints :
// 0 <= |S| <= 1000
// where |S| represents length of string S.

// Sample Input 1 :
// hello

// Sample Output 1:
// hel*lo

// Sample Input 2 :
// aaaa

// Sample Output 2 :
// a*a*a*a

// ==================================================================

#include <bits/stdc++.h>
using namespace std;

string pair_star(string s){
    if(s.size() <= 1){
        return s;
    }

    string small = pair_star(s.substr(1));

    if(s[0] == small[0]){
        return s[0] + "*" + small;
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

        cout << pair_star(s) << endl;
    }

    return 0;
}