#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t-- > 0){
        ll k;
        cin >> k;

        if(k == 100){
            cout << 1 << endl;;
        }else{
            int x = k;
            int y = 100-k;

            int gcd = __gcd(x,y);

            x/=gcd;
            y/=gcd;
            
            cout << x+y << endl;
        }
    }

    return 0;
}