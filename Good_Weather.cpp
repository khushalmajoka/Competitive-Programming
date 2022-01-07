#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t-- > 0){
        int one = 0;
        int zero = 0;
        for(int i = 0; i < 7; i++){
            int x;
            cin >> x;
            if(x == 1){
                one++;
            }else{
                zero++;
            }
        }
        if(one > zero){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}