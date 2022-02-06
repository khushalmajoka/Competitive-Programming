#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool solve(ll arr[], ll n, ll x, ll y, ll i){
    if(i == n){
        if(x == y){
            return true;
        }else{
            return false;
        }
    }
    return solve(arr, n, x+arr[i], y, i+1) || solve(arr, n, x^arr[i], y, i+1);
}

int main(){

    ll t;
    cin >> t;

    while(t--){
        ll n, x, y;
        cin >> n >> x >> y;

        ll arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        bool ans = solve(arr, n, x, y, 0);

        if(ans){
            cout << "Alice" << endl;
        }else{
            cout << "Bob" << endl;
        }
    }

    return 0;
}