#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int sum = a+b+c;

        if(sum <= d){
            cout << 1 << endl;
        }else{
            if(a+b <= d && c <= d || a+c <= d && b <= d || c+b <= d && a <= d){
                cout << 2 << endl;
            }else{
                cout << 3 << endl;
            }
        }
    }

    return 0;
}