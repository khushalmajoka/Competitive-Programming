#include <bits/stdc++.h>
using namespace std;

#define for(x, j, k) for(int i = x; i < j; i += k)
#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;

    if(n%5 == 0){
        ans = n/5;
    }else{
        ans = n/5+1;
    }

    cout << ans;

    return 0;
}