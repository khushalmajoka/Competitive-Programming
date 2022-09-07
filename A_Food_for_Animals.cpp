#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if(a >= x){
            if(b >= y){
                cout << "YES" << endl;
            }else{
                if(c >= y-b){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
            }
        }else if(b >= y){
            if(c >= x-a){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            if(a+b+c >= x+y){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}