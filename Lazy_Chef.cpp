#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        int x, m, d;
        cin >> x >> m >> d;

        int ans = x*m-x;

        if(ans > d){
            cout << x+d << endl;
        }else{
            cout << x*m << endl;
        }
    }

    return 0;
}