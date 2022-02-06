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

        string s;
        cin >> s;

        for(int i = 0; i < n/2; i++){
            if(s[i] != s[n-i-1]){
                k--;
            }
        }

        if(k < 0){
            cout << "NO" << endl;
        }else{
            if(k%2 == 0){
                cout << "YES" << endl;
            }else{
                if(n%2){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}