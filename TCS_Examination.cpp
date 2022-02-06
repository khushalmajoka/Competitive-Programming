#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a1, b1, c1, a2, b2, c2;
        cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

        if(a1+b1+c1 > a2+b2+c2){
            cout << "DRAGON" << endl;
        }else if(a1+b1+c1 < a2+b2+c2){
            cout << "SLOTH" << endl;
        }else{
            if(a1 > a2){
                cout << "DRAGON" << endl;
            }else if(a2 > a1){
                cout << "SLOTH" << endl;
            }else{
                if(b1 > b2){
                    cout << "DRAGON" << endl;
                }else if(b2 > b1){
                    cout << "SLOTH" << endl;
                }else{
                    cout << "TIE" << endl;
                }
            }
        }
    }

    return 0;
}