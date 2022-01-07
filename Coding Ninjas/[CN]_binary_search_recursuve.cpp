// Problem Statement: Binary Search (Recursive)
// Problem Level: EASY
// Problem Description:
// Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. 
// Return the index of x.
// Return -1 if x is not present in the given array.
// Note : If given array size is even, take first mid.
// Input format :
// Line 1 : Array size
// Line 2 : Array elements (separated by space)
// Line 3 : x (element to be searched)

// Sample Input :
// 6
// 2 3 4 5 6 8 
// 5

// Sample Output:
// 3

// ====================================================

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int l, int r, int x){
    if(l > r){
        return -1;
    }

    if(l == r){
        if(arr[l] == x){
            return l;
        }else{
            return -1;
        }
    }

    int mid = (l+r)/2;

    if(x == arr[mid]){
        return mid;
    }else if(x < arr[mid]){
        return search(arr, l, mid-1, x);
    }else{
        return search(arr, mid+1, r, x);
    }
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

        for(int i= 0; i < n; i++){
            cin >> arr[i];
        }

        int x;
        cin >> x;

        cout << search(arr, 0, n-1, x) << endl;
    }

    return 0;
}