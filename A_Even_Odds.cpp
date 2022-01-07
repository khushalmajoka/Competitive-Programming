#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    ll x = n/2;

    if(n % 2 == 0){
        if(k <= x){
            cout << 2*k-1;
        }else{
            k -= n/2;
            cout << 2*k;
        }
    }else{
        if(k <= x+1){
            cout << 2*k-1;
        }else{
            k -= x+1;
            cout << 2*k;
        }
    }
 
    return 0;
}