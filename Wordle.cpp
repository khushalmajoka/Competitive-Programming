#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s, t;
        cin >> s >> t;

        string ans = "";

        for(int i = 0; i < 5; i++){
            if(s[i]==t[i]){
                ans += "G";
            }else{
                ans += "B";
            }
        }

        cout << ans << endl;
    }

    return 0;
}