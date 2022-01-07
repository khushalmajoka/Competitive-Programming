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

        int amnt = x + (y*2);

        if(x % 2 == 0 && y % 2 == 0){
            cout << "YES" << endl;
        }else if(y % 2 != 0 && x % 2 == 0 && x != 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}