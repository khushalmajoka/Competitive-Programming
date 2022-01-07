#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, x, y;
        cin >> n >> x >> y;

        if((x % 2 == 0 && y % 2 == 0) || (x %  2 != 0 && y % 2 != 0)){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
        }
    }

    return 0;
}