// Problem Statement: Replace pi (recursive)
// Problem Level: MEDIUM
// Problem Description:
// Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

// Sample Input 1 :
// xpix

// Sample Output :
// x3.14x

// Sample Input 2 :
// pipi

// Sample Output :
// 3.143.14

// Sample Input 3 :
// pip

// Sample Output :
// 3.14p

// ================================================

#include <bits/stdc++.h>
using namespace std;

string rep(string s){
    if(s.size() <= 1){
        return s;
    }

    if(s[0] == 'p' && s[1] == 'i'){
        s.replace(s.begin(), s.begin()+2, "3.14");
    }

    return s[0] + rep(s.substr(1));
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        cout << rep(s) << endl;
    }

    return 0;
}