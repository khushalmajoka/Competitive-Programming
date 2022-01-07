// Problem Statement: Replace character recursively
// Problem Level: EASY
// Problem Description:
// Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in 
// the given string.
// Do this recursively.
// Input Format :
// Line 1 : Input String S
// Line 2 : Character c1 and c2 (separated by space)

// Output Format :
// Updated string

// Constraints :
// 1 <= Length of String S <= 10^6

// Sample Input :
// abacd
// a x

// Sample Output :
// xbxcd

// =============================================================================

#include <bits/stdc++.h>
using namespace std;

void replace(char* arr, char x, char y){
    if(arr[0] == '\0'){
        return;
    }

    replace(arr+1, x, y); 

    if(arr[0] == x){
        arr[0] = y;
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        char arr[1000001];
        cin >> arr;

        char x, y;
        cin >> x >> y;

        replace(arr, x, y);

        for(int i = 0; arr[i] != '\0'; i++){
            cout << arr[i];
        }

        cout << endl;
    }

    return 0;
}