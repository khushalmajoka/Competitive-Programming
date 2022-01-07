#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string t, s;
    cin >> t >> s;

    if(t.length() != s.length()){
        cout << "NO";
    }else{
        bool check = false;
        for(int i = 0; i < t.length(); i++){
            if(t[i] != s[t.length()-i-1]){
                check = true;
                break;
            }
        }
        if(check){
            cout << "NO";
        }else{
            cout << "YES";
        }
    }

    return 0;
}