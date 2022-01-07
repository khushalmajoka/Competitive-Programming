#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll sum = 0;

    if(n % 2 == 0){
        sum = n/2;
    }else{
        sum = (n+(n*n)-((1+n)*(1+n)))/2;
    }

    cout << sum;

    return 0;
}
