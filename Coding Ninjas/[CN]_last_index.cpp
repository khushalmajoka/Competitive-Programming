// Problem Statement: Last index of x
// Problem Level: MEDIUM
// Problem Description:
// Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. 
// Return -1 if it is not present in the array.
// Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
// You should start traversing your array from 0, not from (N - 1).
// Do this recursively. Indexing in the array starts from 0.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x

// Output Format :
// last index or -1

// Constraints :
// 1 <= N <= 10^3

// Sample Input :
// 4
// 9 8 10 8
// 8

// Sample Output :
// 3

// ======================================================================

#include <bits/stdc++.h>
using namespace std;

int index(int arr[], int size, int x){
    if(size == 0){
        return -1;
    }

    int res = index(arr+1, size-1, x);

    if(res == -1){
        if(arr[0] == x){
            return 0;
        }else{
            return -1;
        }
    }

    return res+1;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int x;
        cin >> x;

        cout << index(arr, n, x) << endl;
    }

    return 0;
}