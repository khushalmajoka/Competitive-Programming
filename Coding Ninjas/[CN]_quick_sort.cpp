// Problem Statement: Quick Sort
// Problem Level: MEDIUM
// Problem Description:
// Sort an array A using Quick Sort.
// Change in the input array itself. So no need to return or print anything.
// <br>
// Input format :
// Line 1 : Integer n i.e. Array size
// Line 2 : Array elements (separated by space)

// Output format :
// Array elements in increasing order (separated by space)

// Constraints :
// 1 <= n <= 10^3

// Sample Input 1 :
// 6 
// 2 6 8 5 4 3

// Sample Output 1 :
// 2 3 4 5 6 8

// Sample Input 2 :
// 5
// 1 5 2 7 3

// Sample Output 2 :
// 1 2 3 5 7

// =============================================

#include <bits/stdc++.h>
using namespace std;

int partition (int arr[], int low, int high){ 
    int pivot = arr[high];
    int i = (low - 1);
  
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot){
            i++; 
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
} 

void quick_sort(int arr[], int l, int r){
    if(l < r){
        int pivot = partition(arr, l, r);
        quick_sort(arr, l, pivot-1);
        quick_sort(arr, pivot+1, r);
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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        quick_sort(arr, 0, n-1);

        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}