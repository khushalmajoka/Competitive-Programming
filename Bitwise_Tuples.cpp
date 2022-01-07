#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long int power(long long int a, long long int b){
    long long int res = 1;

    while(b > 0){
        if(b&1 != 0){
            res = (res % mod * a % mod) % mod;
        }

        a = (a % mod * a % mod) % mod;
        b = b >> 1;
    }

    return res;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        int n, m;
        cin >> n >> m;

        long long int x = power(2, n)-1;
        long long int y = power(x, m);

        cout << y << endl;
    }

    return 0;
}