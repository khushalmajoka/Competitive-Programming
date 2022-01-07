#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n];

    int sum = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n);

    if(sum % 2 == 0){
        int x = sum/2;
        int temp = 0;
        int i;
        for(i = n-1; i >= 0; i--){
            temp += arr[i];
            if(temp > x){
                break;
            }
        }
        cout << n-i;
    }else{
        int x = (sum+1)/2;
        int temp = 0;
        int i;
        for(i = n-1; i >= 0; i--){
            temp += arr[i];
            if(temp >= x){
                break;
            }
        }
        cout << n-i;
    }

    return 0;
}