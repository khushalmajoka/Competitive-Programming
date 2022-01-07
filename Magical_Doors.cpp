#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int ans = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0' && s[i+1] == '1' || s[i] == '1' && s[i+1] == '0'){
                ans++;
            }
        }

        if(s[0] == '0'){
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}