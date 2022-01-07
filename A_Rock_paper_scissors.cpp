#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;

    if(x == y){
        cout << x;
    }else{
        if(x == 0 && y == 1){
            cout << 2;
        }else if(x == 0 && y ==2){
            cout << 1;
        }else if(x == 1 && y == 0){
            cout << 2;
        }else if(x == 1 && y == 2){
            cout << 0;
        }else if(x == 2 && y == 0){
            cout << 1;
        }else{
            cout << 0;
        }
    }

    return 0;
}