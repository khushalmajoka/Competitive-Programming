#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll temp = 1;
    ll mx = -1000000;

    for(ll i = 0; i < n-1; i++){
        if(arr[i] <= arr[i+1]){
            temp++;
        }else{
            mx = max(mx, temp);
            temp = 1;
        }
    }
    mx = max(mx, temp);

    cout << mx;

    return 0;
}