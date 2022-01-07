#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T-- > 0){
        ll n, m;
        cin >> n >> m;

        ll count = 0;

        vector<ll> arr(n+1, 1);
        for(ll i = 2; i <= n; i++){
            ll x = m % i;
            count += arr[x];
            for(ll j = x; j <= n; j += i){
                arr[j]++;
            }
        }

        cout << count << endl;
    }
    return 0;
}