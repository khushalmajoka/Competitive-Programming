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

        int b = 0;
        int r = 0;

        bool check = false;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                b++;
            }else if(s[i] == 'R'){
                r++;
            }else{
                if((b == 0 && r != 0) || (b != 0 && r == 0)){
                    cout << "NO" << endl;
                    check = true;
                    break;
                }
                b = 0;
                r = 0;
            }
        }

        if(!check){
            if((b == 0 && r != 0) || (b != 0 && r == 0)){
                cout << "NO" << endl;
                check = true;
            }else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}