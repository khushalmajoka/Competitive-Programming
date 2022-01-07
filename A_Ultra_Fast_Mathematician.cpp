#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string x, y;
    cin >> x >> y;

    string ans;

    for(int i = 0; i < x.size(); i++){
        if(x[i] == y[i]){
            ans += "0";
        }else{
            ans += "1";
        }
    }
    
    cout << ans;

    return 0;
}