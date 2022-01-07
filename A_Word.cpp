#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int u = 0;
    int l = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            u++;
        }
    }
    l = s.length()-u;

    if(l >= u){
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 32;
            }
        }
    }else{
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] -= 32;
            }
        }
    }

    cout << s << endl;

    return 0;
}   