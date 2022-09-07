#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int balls, boxes;
        cin >> balls >> boxes;
        if(balls < boxes) cout << "NO" << endl;
        else{
            int x = (2*balls)-(2*boxes)-(boxes*boxes)+boxes;
            int y = 2*boxes;
            if(x < 0){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}