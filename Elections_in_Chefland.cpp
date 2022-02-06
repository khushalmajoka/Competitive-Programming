#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        if(a > 50 && max(a, max(b, c)) == a){
            cout << "A" << endl;
        }else if(b > 50 && max(a, max(b, c)) == b){
            cout << "B" << endl;
        }else if(c > 50 && max(a, max(b, c)) == c){
            cout << "C" << endl;
        }else{
            cout << "NOTA" << endl;
        }
    }

    return 0;
}