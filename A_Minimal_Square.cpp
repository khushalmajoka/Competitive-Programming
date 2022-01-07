#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        int x, y;
        cin >> x >> y;

        if(x == y){
            cout << pow(x*2, 2) << endl;
        }else{
            int a = min(x, y);

            if(a == x){
                if(x*2 >= y){
                    cout << pow(x*2, 2) << endl;
                }else{
                    cout << pow(y, 2) << endl;
                }
            }else{
                if(y*2 >= x){
                    cout << pow(y*2, 2) << endl;
                }else{
                    cout << pow(x, 2) << endl;
                }
            }
        }
    }

    return 0;
}