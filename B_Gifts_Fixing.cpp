#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> a(n);
        vector<ll> b(n);

        ll mna = INT_MAX;
        ll mnb = INT_MAX;

        for(ll i = 0; i < n; i++){
            cin >> a[i];
            mna = min(mna, a[i]);
        }

        for(ll i= 0; i < n; i++){
            cin >> b[i];
            mnb = min(mnb, b[i]);
        }

        ll ans = 0;

        for(ll i = 0; i < n; i++){
            ll x = a[i]-mna;
            ll y = b[i]-mnb;

            ans += max(x, y);
        }

        cout << ans << endl;
    }

    return 0;
}