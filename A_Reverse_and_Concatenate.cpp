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

        bool palin = true;

        for(int i = 0; i < n/2; i++){
            if(s[i] != s[n-i-1]){
                palin = false;
            }
        }

        if(palin){
            cout << 1 << endl;
        }else{
            if(k < 2){
                cout << 1 << endl;
            }else{
                cout << 2 << endl;
            }
        }
    }

    return 0;
}