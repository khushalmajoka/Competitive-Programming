#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int chef = 0, other = 0;

        for(int i = 0; i < n; i++){
            if(i%2 == 0){
                if(s[i] == '1'){
                    chef++;
                }else{
                    other++;
                }
            }else{
                if(s[i] == '1'){
                    other++;
                }else{
                    chef++;
                }
            }
        }

        if(chef > other){
            cout << "WON" << endl;
        }else if(chef < other){
            cout << "LOST" << endl;
        }else{
            cout << "DRAW" << endl;
        }
    }

    return 0;
}