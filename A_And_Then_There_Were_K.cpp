#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t-- > 0){
        ll n;
        cin >> n;

        int a = 1;
        while(a * 2 <= n){
            a *= 2;
        }

        cout << a-1 << endl;
    }

    return 0;
}