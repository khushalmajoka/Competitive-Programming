#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string x, y;
    cin >> x >> y;

    bool check = false;

    for(int i = 0; i < x.length(); i++){
        if(x[i] >= 65 && x[i] <= 90){
            x[i] += 32;
        }
        if(y[i] >= 65 && y[i] <= 90){
            y[i] += 32;
        }
        if(x[i] < y[i]){
            cout << -1 << endl;
            check = true;
            break;
        }else if(x[i] > y[i]){
            cout << 1 << endl;
            check = true;
            break;
        }
    }

    if(!check){
        cout << 0 << endl;
    }
    return 0;
}