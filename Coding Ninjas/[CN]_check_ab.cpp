// Chapter Assignment
// Problem Statement: Check AB
// Problem Level: MEDIUM
// Problem Description:
// Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was 
// generated using the following rules:
// a. The string begins with an 'a'
// b. Each 'a' is followed by nothing or an 'a' or "bb"
// c. Each "bb" is followed by nothing or an 'a'

// If all the rules are followed by the given string, return true otherwise return false.
// Input format :
// String S

// Output format :
// 'true' or 'false'

// Constraints :
// 0 <= |S| <= 1000
// where |S| represents length of string S.

// Sample Input 1 :
// abb

// Sample Output 1 :
// true

// Sample Input 2 :
// abababa

// Sample Output 2 :
// false

// =========================================

#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    if(s == ""){
        return true;
    }

    if(s[0] == 'a'){
        if(s.substr(1).size() > 1 && s.substr(1, 2) == "bb"){
            return check(s.substr(3));
        }else{
            return check(s.substr(1));
        }
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

        if(s[0] == 'a'){
            bool ans = check(s);
            if(ans){
                cout << "true" << endl;
            }else{
                cout << "false" << endl;
            }
        }else{
            cout << "false" << endl;
        }
    }

    return 0;
}