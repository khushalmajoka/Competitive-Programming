// Problem Statement: Check Palindrome (recursive)
// Problem Level: MEDIUM
// Problem Description:
// Check whether a given String S is a palindrome using recursion. Return true or false.
// Input Format :
// String S

// Output Format :
// 'true' or 'false'

// Constraints :
// 0 <= |S| <= 1000
// where |S| represents length of string S.

// Sample Input 1 :
// racecar

// Sample Output 1:
// true

// Sample Input 2 :
// ninja

// Sample Output 2:
// false

// =================================================

#include <bits/stdc++.h>
using namespace std;

bool check(string s, int start, int end){
    if(start == end || start > end){
        return true;
    }

    bool small = check(s, start+1, end-1);

    if(!small){
        return false;
    }

    if(s[0] == s[s.size()-1]){
        return true;
    }

    return false;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        if(check(s ,0 , s.size()-1)){
            cout << "true" << endl;
        }else{
            cout << "false" << endl;
        }
    }

    return 0;
}