#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long int power(long long int x){
    long long int a = 2;
    long long int ans = 1;
    while(x > 0){
        if(x & 1 != 0){
            ans = (ans * a % mod) % mod;
        }

        a = (a % mod * a % mod) % mod;
        x = x >> 1;
    }

    return ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    
    while(T-- > 0){
        int n;
        cin >> n;
        long long int count = power(n-1);
        cout << count << endl;
    }
    return 0;
}   