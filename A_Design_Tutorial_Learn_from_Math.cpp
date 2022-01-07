#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<
#define vi vector<int>

bool isPrime(int x){
    for(i, 2, x-1){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(i, 4, n){
        if(!isPrime(i)){
            if(!isPrime(n-i)){
                co i << " " << n-i;
                break;
            }
        }
    }

    return 0;
}