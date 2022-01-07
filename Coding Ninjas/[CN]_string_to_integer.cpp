// Problem Statement: String to Integer
// Problem Level: MEDIUM
// Problem Description:
// Write a recursive function to convert a given string into the number it represents. 
// That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer 
// and return the answer.
// Input format :
// Numeric string S (string, Eg. "1234")

// Output format :
// Corresponding integer N (int, Eg. 1234)

// Constraints :
// 0 <= |S| <= 9
// where |S| represents length of string S.

// Sample Input 1 :
// 1231

// Sample Output 1 :
// 1231

// Sample Input 2 :
// 12567

// Sample Output 2 :
// 12567

// =======================================

#include <bits/stdc++.h>
using namespace std;

int sti(string s){
    if(s.size() == 1){
        return s[0]-'0';
    }

    int num = sti(s.substr(0, s.size()-1));

    return num*10 + (s[s.size()-1] - '0');
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        cout << sti(s) << endl;
    }

    return 0;
}