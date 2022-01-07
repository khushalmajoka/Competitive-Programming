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

        if(n == k+1){
            cout << -1 << endl;
        }else if(n == k){
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
            cout << endl;
        }else if(k == 0){
            cout << n << " ";
            for(int i = 1; i < n; i++){
                cout << i << " ";
            }
            cout << endl;
        }else{
            for(int i = 1; i <= k; i++){
                cout << i << " ";
            }
            for(int i = k+2; i <= n; i++){
                cout << i << " ";
            }
            cout << k+1 << endl;
        }
    }

    return 0;
}