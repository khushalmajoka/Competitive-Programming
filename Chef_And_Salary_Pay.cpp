#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int x, y, ans = 0;
        cin >> x >> y;

        string s;
        cin >> s;

        int count = 0, mx = 0;
        bool check = false;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                ans += x;
                count++;
            }else{
                check = true;
                count = 0;
            }
            mx = max(mx, count);
        }

        if(!check){
            mx = s.size();
        }

        ans += mx*y;

        cout << ans << endl;
    }

    return 0;
}