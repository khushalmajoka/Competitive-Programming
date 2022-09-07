#include <bits/stdc++.h>
using namespace std;


int print2largest(int arr[], int n) {
    // code here
    int largest = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > largest) largest = arr[i];
    }
    
    int large2 = 0;
    for(int i = 1; i < n; i++){
        int diff = largest - arr[0];
        if(diff > (largest - arr[i]) && arr[i] != largest){
            diff = largest - arr[i];
            large2 = arr[i];
            cout << diff <<' ';
        }
    }
    return large2;
}
