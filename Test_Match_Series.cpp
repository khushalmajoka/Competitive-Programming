#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int num = 0, n = 5;
        
        while(n--){
            int x;
            cin >> x;
            if(x == 1){
                num++;
            }else if(x == 2){
                num--;
            }
        }

        if(num == 0){
            cout << "DRAW" << endl;
        }else if(num > 0){
            cout << "INDIA" << endl;
        }else{
            cout << "ENGLAND" << endl;
        }
    }

    return 0;
}