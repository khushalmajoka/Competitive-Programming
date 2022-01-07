#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string ans;

    for(int i = 0; i < s.length(); i++){
        if(!(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'y' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')){
            char x = s[i];
            if(x >= 'A' && x <= 'Z'){
                x = x + 32;
            }
            ans += ".";
            ans += x;
        }
    }

    cout << ans << endl;
    return 0;
}