#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, a;
    cin >> n >> m >> a;
    ll ans = 0;

    if(n == 1 || m == 1){
        ll x = max(n, m);
        if(x % a == 0){
            ans = x/a;
        }else{
            ans = (x/a)+1;
        }
    }else if(a >= max(n, m)){
        ans = 1;
    }else if(a == 1){
        ans = n*m;
    }else{
        ll x = max(n, m);
        ll small = 0;
        if(n == m){
            small = x;
        }else{
            if(x == n){
                small = m;
            }else{
                small = n;
            }
        }
        if(a >= small){
            if(x%a == 0){
                ans = x/a;
            }else{
                ans = (x/a)+1;
            }
        }else{
            ll c = 0;
            ll b = 0;
            if(x % a == 0){
                b = x/a;
            }else{
                b = (x/a)+1;
            }
            if(small % a == 0){
                c = small/a;
            }else{
                c = (small/a)+1;
            }
            ans = b*c;
        }
    }

    cout << ans << endl;
    return 0;
}