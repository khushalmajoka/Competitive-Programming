#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n];

    int mx = INT_MIN;
    int mn = INT_MAX;
    int mini = -1;
    int maxi = -1;

    for(i, 0, n){
        cin >> arr[i];
        if(arr[i] == mn){
            mini = max(mini, i);
        }else if(arr[i] < mn){
            mn = arr[i];
            mini = i;
        }if(arr[i] == mx){
            maxi = min(maxi, i);
        }else if(arr[i] > mx){
            mx = arr[i];
            maxi = i;
        }
    }

    if(mini > maxi){
        cout << maxi+n-mini-1;
    }else{
        cout << maxi+n-mini-2;
    }

    return 0;
}