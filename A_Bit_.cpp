#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
     
    int ans = 0;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s[0] == '+' || s[2] == '+'){
            ans++;
        }else{
            ans--;
        }
    }

    cout << ans << endl;
    return 0;
}   