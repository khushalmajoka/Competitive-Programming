#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        if(n % k == 0){
            cout << n/k << endl;
        }else{
            cout << -1 << endl;
        }
    }

    return 0;
}