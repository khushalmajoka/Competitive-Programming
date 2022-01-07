// Problem Statement: Return Keypad - String
// Problem Level: HARD
// Problem Description:
// Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
// Return empty string for numbers 0 and 1.
// Note : 1. The order of strings are not important.
// 2. Input and output has already been managed for you. You just have to populate the output array and return the count of 
// elements populated in the output array.
// Input Format :
// Integer n

// Output Format :
// All possible strings in different lines

// Constraints :
// 1 <= n <= 10^6

// Sample Input:
// 23

// Sample Output:
// ad
// ae
// af
// bd
// be
// bf
// cd
// ce
// cf

// =====================================================

#include <bits/stdc++.h>
using namespace std;

void print(string v[], int n){
    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }
}

int number_of_digits(int n){
    int ans = 1;
    while(n){
        int last = n % 10;
        switch(last){
            case 0: 
                ans *= 1;
            break;
            case 1:
                ans *= 1;
            break;
            case 2: 
                ans *= 3;
            break;
            case 3:
                ans *= 3;
            break;
            case 4:
                ans *= 3;
            break;
            case 5:
                ans *= 3;
            break;
            case 6:
                ans *= 3;
            break;
            case 7:
                ans *= 4;
            break;
            case 8:
                ans *= 3;
            break;
            case 9:
                ans *= 4;
            break;
        }
        n /= 10;
    }
    return ans;
}

int keypad(int n, string arr[]){

    string s;

    if(n == 0 || n == 1){
        arr[0] = "";
        return 1;
    }

    int num = n%10;
    n /= 10;

    int smallSize = keypad(n, arr);

    switch(num){
        case 2:
            s = "abc";
        break;
        case 3:
            s = "def";
        break;
        case 4:
            s = "ghi";
        break;
        case 5:
            s = "jkl";
        break;
        case 6:
            s = "mno";
        break;
        case 7:
            s = "pqrs";
        break;
        case 8:
            s = "tuv";
        break;
        case 9:
            s = "wxyz";
        break;
    }

    int ans_size = smallSize*(s.size());
    string temp[ans_size];
    int k = 0;
    for(int i = 0; i < smallSize; i++){
        for(int j = 0; j < s.size(); j++){
            temp[k] = arr[i]+s[j];
            k++;
        }
        
    }
    for(int i=0; i<ans_size; i++){
        arr[i] = temp[i];
    }
    return s.size()*smallSize;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int nod = number_of_digits(n);

        string output[nod];

        int count = keypad(n, output);

        print(output, count);
    }

    return 0;
}