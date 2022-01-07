#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    bool check = false;

    for(int i = 1; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            check = true;
            break;
        }
    }

    if(check){
        cout << s;
    }else{
        if(s[0] >= 'a' && s[0] <= 'z'){
            s[0]-=32;
        }else{
            s[0]+=32;
        }
        for(int i = 1; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i]+=32;
            }
        }
        cout << s;
    }

    return 0;
}