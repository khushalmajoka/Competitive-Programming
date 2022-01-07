#include <bits/stdc++.h>
using namespace std;

#define for(x, j, k) for(int i = x; i < j; i += k)
#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    for(0, k, 1){
        if((n%10) > 0){
            n--;
        }else{
            n/=10;
        }
    }

    cout << n;
    return 0;
}