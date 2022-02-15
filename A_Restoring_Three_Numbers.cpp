#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int mx = max(a, max(b, max(c, d)));

    if(mx == a){
        cout << mx- b << " " << mx- c << " " << mx-d;
    }else if(mx == b){
        cout << mx- a << " " << mx- c << " " << mx-d;
    }else if(mx == c){
        cout << mx- b << " " << mx- a << " " << mx-d;
    }else{
        cout << mx- b << " " << mx- c << " " << mx-a;
    }

    return 0;
}