#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;

        while(k--){
            x += a;
            y += b;
        }

        if(x < y){
            cout << "PETROL" << endl;
        }else if(x > y){
            cout << "DIESEL" << endl;
        }else{
            cout << "SAME PRICE" << endl;
        }
    }

    return 0;
}