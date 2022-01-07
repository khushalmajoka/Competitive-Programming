#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        long long int n;
        cin >> n;

        if(n % 2050 == 0){
            long long int x = n/2050;
            long long int ans = 0;
            while(x > 0){
                ans += x%10;
                x/=10;
            }
            cout << ans << endl;
        }else{
            cout << -1 << endl;
        }
    }

    return 0;
}