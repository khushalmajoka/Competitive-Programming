#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int x, y;
        cin >> x >> y;

        int r = y%x;
        if(r == 0){
            y-=x;
            cout << y/x << endl;
        }else{
            cout << y/x << endl;
        }
    }

    return 0;
}