#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<
#define vi vector<int>

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll ans = 0;

    if(n >= 100){
        ans += n/100;
        if(n % 100 == 0){
            co ans;
            return 0;
        }
        n = n % 100;
    }

    if(n >= 20){
        ans += n/20;
        if(n % 20 == 0){
            co ans;
            return 0;
        }
        n = n % 20;
    }
    if(n >= 10){
        ans += n/10;
        if(n % 10 == 0){
            co ans;
            return 0;
        }
        n = n % 10;
    }
    if(n >= 5){
        ans += n/5;
        if(n % 5 == 0){
            co ans;
            return 0;
        }
        n = n % 5;
    }
    if(n < 5){
        ans += n;
    }

    co ans;

    return 0;
}