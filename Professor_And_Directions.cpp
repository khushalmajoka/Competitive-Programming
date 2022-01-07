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

        bool check = false;

        for(int i = 0; i < n-1; i++){
            if(s.substr(i, 2) == "LL" || s.substr(i, 2) == "RR"){
                cout << "YES" << endl;
                check = true;
                break;
            }
        }

        if(!check){
            cout << "NO" << endl;
        }
    }

    return 0;
}