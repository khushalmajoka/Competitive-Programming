// Problem Statement: Remove Duplicates 
// Problem Level: EASY
// Problem Description:
// Given a string S, remove consecutive duplicates from it recursively.
// Input Format :
// String S

// Output Format :
// Output string

// Constraints :
// 1 <= |S| <= 10^3
// where |S| represents the length of string

// Sample Input 1 :
// aabccba

// Sample Output 1 :
// abcba

// Sample Input 2 :
// xxxyyyzwwzzz

// Sample Output 2 :
// xyzwz


// ==================================================================

#include <bits/stdc++.h>
using namespace std;

string remove_duplicates(string s){
    if(s.size() == 0){
        return s;
    }

    string small = remove_duplicates(s.substr(1));

    if(s[0] == small[0]){
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

        cout << remove_duplicates(s) << endl;
    }

    return 0;
}