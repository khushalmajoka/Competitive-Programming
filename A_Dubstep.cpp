#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string ans;

    bool check = true;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            if(check == false){
                ans += " ";
                check = true;
            }
            i+=2;
        }else{
            ans += s[i];
            check = false;
        }
    }

    cout << ans << endl;

    return 0;
}