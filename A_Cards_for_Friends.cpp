#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int x, y, z;
        cin >> x >> y >> z;

        int ans = 1;

        while(x % 2 == 0){
            x /= 2;
            ans *= 2;
        }

        while(y % 2 == 0){
            y /= 2;
            ans *= 2;
        }

        if(ans >= z){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}