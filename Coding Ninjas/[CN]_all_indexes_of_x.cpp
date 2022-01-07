// Problem Statement: All indexes of x
// Problem Level: MEDIUM
// Problem Description:
// Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. 
// Save all the indexes in an array (in increasing order).
// Do this recursively. Indexing in the array starts from 0.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x

// Output Format :
// indexes where x is present in the array (separated by space)

// Constraints :
// 1 <= N <= 10^3

// Sample Input :
// 5
// 9 8 10 8 8
// 8

// Sample Output :
// 1 3 4

// ========================================================

#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int size, int x, int curr){
    if(size == 0){
        return;
    }

    if(arr[0] == x){
        cout << curr << " ";
    }

    print(arr+1, size-1, x, curr+1);
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

        print(arr, n, x, 0);

        cout << endl;
    }

    return 0;
}