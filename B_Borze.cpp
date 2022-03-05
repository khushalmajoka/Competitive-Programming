#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    string ans = "";

    for(int i = 0; i < s.size(); i++){
        switch(s[i]){
            case '.':
                ans += "0";
                break;
            case '-':
                if(i != s.size()-1){
                    if(s[i+1] == '.'){
                        ans += "1";
                        i++;
                    }else{
                        ans += "2";
                        i++;
                    }
                }
                break;
        }
    }

    cout << ans;

    return 0;
}